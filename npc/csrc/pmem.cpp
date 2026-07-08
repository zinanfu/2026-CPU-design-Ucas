#include "pmem.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <sys/time.h>
#include <cerrno>
#include <csignal>
#include <deque>
#include <mutex>
#include <thread>
#include <termios.h>
#include <unistd.h>

static uint8_t *pmem = nullptr;
static size_t pmem_size = 0;
static uint32_t pmem_base_addr = 0;
static uint64_t rtc_boot_us = 0;

#define SERIAL_LSR_PORT (SERIAL_PORT + 5)
#define UART_LSR_DR 0x01u

static int uart_rx_cached = -1;
static bool uart_stdin_ready = false;
static struct termios uart_stdin_termios;
static bool uart_stdin_has_termios = false;
static std::mutex uart_rx_lock;
static std::deque<unsigned char> uart_rx_queue;

static void restore_uart_stdin() {
    if (uart_stdin_has_termios) {
        tcsetattr(STDIN_FILENO, TCSANOW, &uart_stdin_termios);
        uart_stdin_has_termios = false;
    }
}

static void handle_uart_signal(int sig) {
    restore_uart_stdin();
    signal(sig, SIG_DFL);
    raise(sig);
}

static void uart_input_thread() {
    while (true) {
        unsigned char ch = 0;
        ssize_t n = read(STDIN_FILENO, &ch, 1);
        if (n == 1) {
            std::lock_guard<std::mutex> guard(uart_rx_lock);
            uart_rx_queue.push_back(ch);
        } else if (n == 0) {
            usleep(10000);
        } else if (errno != EINTR) {
            usleep(10000);
        }
    }
}

static void init_uart_stdin() {
    if (uart_stdin_ready) return;
    uart_stdin_ready = true;

    if (isatty(STDIN_FILENO) && tcgetattr(STDIN_FILENO, &uart_stdin_termios) == 0) {
        struct termios raw = uart_stdin_termios;
        raw.c_lflag &= ~(ICANON | ECHO);
        raw.c_cc[VMIN] = 0;
        raw.c_cc[VTIME] = 0;
        if (tcsetattr(STDIN_FILENO, TCSANOW, &raw) == 0) {
            uart_stdin_has_termios = true;
        }
    }

    atexit(restore_uart_stdin);
    signal(SIGINT, handle_uart_signal);
    signal(SIGTERM, handle_uart_signal);

    std::thread(uart_input_thread).detach();
}

static int uart_rx_peek() {
    init_uart_stdin();

    if (uart_rx_cached >= 0) {
        return uart_rx_cached;
    }

    std::lock_guard<std::mutex> guard(uart_rx_lock);
    if (!uart_rx_queue.empty()) {
        uart_rx_cached = uart_rx_queue.front();
        uart_rx_queue.pop_front();
        return uart_rx_cached;
    }
    return -1;
}

static int uart_rx_pop() {
    int ch = uart_rx_peek();
    if (ch >= 0) {
        uart_rx_cached = -1;
    }
    return ch;
}

static uint32_t uart_read(uint32_t addr) {
    if (addr == SERIAL_PORT) {
        int ch = uart_rx_pop();
        return ch >= 0 ? (uint8_t)ch : 0;
    }

    uint32_t lsr = uart_rx_peek() >= 0 ? UART_LSR_DR : 0;
    if (addr == SERIAL_LSR_PORT) {
        return lsr;
    }
    if (addr == (SERIAL_LSR_PORT & ~0x3u)) {
        return lsr << ((SERIAL_LSR_PORT & 0x3u) * 8);
    }

    return 0;
}

void init_pmem(size_t size, uint32_t base) {
    init_uart_stdin();

    if (pmem) {
        free_pmem();
    }

    rtc_boot_us = 0;

    pmem = (uint8_t *)malloc(size);
    assert(pmem);
    memset(pmem, 0, size);

    pmem_size = size;
    pmem_base_addr = base;

}

void free_pmem() {
    if (pmem) {
        free(pmem);
        pmem = nullptr;
    }

    pmem_size = 0;
    pmem_base_addr = 0;

}

bool load_image(const char *path, uint32_t load_addr) {
    FILE *f = fopen(path, "rb");
    if (!f) {
        printf("Error: can't open file\n");
        return false;
    }

    uint32_t offset = load_addr - pmem_base_addr;



    if (offset >= pmem_size) {
        fclose(f);
        printf("Error: offset wrong\n");
        return false;
    }

    size_t maxcopy = pmem_size - offset;
    size_t n = fread(pmem + offset, 1, maxcopy, f);

    // printf("first inst = 0x%08x\n", *(uint32_t *)pmem);

    fclose(f);
    return n > 0;
}

static inline bool in_pmem(uint32_t addr, int len) {
    if (addr >= pmem_base_addr && (addr + len) <= pmem_base_addr + pmem_size) {
        return true;
    }
    return false;
}

extern "C" uint32_t paddr_read(uint32_t addr, int len, bool is_inst) {
    assert(len == 1 || len == 2 || len == 4);
    if (!in_pmem(addr, len)) {

        

        if (addr >= SERIAL_PORT && addr < SERIAL_PORT + 8) {
            return uart_read(addr);
        }

        // MMIO: provide RTC value (microseconds since start)
        if (addr == RTC_ADDR || addr == RTC_ADDR + 4) {
            struct timeval tv;
            gettimeofday(&tv, NULL);
            uint64_t us = (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
            if (rtc_boot_us == 0) {
                rtc_boot_us = us;
            }
            us -= rtc_boot_us;
            uint32_t lo = (uint32_t)(us & 0xffffffff);
            uint32_t hi = (uint32_t)((us >> 32) & 0xffffffff);
            if (addr == RTC_ADDR) {
                return lo;
            } else {
                return hi;
            }
        }

        return 0;
    }

    uint32_t offset = addr - pmem_base_addr;
    uint32_t ret = 0;

    for (int i = 0; i < len; i++) {
        ret |= (uint32_t)pmem[offset + i] << (8 * i);
    }
    
    // mtrace

#ifdef CONFIG_MTRACE

    if (!is_inst) {
        printf("[mtrace(mem)] read addr = 0x%08x, len = %d, data = 0x%08x\n",  addr, len, ret);
    }
#endif
    return ret;
}

extern "C" void paddr_write(uint32_t addr, int len, uint32_t data, uint8_t wmask, bool is_inst) {
    assert(len == 1 || len == 2 || len == 4);
    
    // Debug: print every physical write to help trace MMIO vs PMEM
    // printf("paddr_write called addr = 0x%08x len = %d data = 0x%08x wmask = 0x%x\n",
    //        addr, len, data, wmask);
    if (!in_pmem(addr, len)) {

        if ((addr & ~0x3) == SERIAL_PORT) {
            uint8_t ch = 0;

            if (wmask & 0x1) {
                ch = data & 0xff;
            }
            else if (wmask & 0x2) {
                ch = (data >> 8) & 0xff;
            }
            else if (wmask & 0x4) {
                ch = (data >> 16) & 0xff;
            }
            else if (wmask & 0x8) {
                ch = (data >> 24) & 0xff;
            }

            // printf("ch = %c\n", ch);
            // fprintf(stderr, "[UART] 0x%02x '%c', addr = %08x\n", ch, (ch >= 32 && ch < 127) ? ch : '.', addr);
            putchar(ch);
            fflush(stdout);
        }


        return;
    }

    uint32_t offset = addr - pmem_base_addr;
    for (int i = 0; i < 4; i++) {
        if (wmask & (1u << i)) {
            pmem[offset + i] = (data >> (8 * i)) & 0xff;
        }
    }

    // mtrace

#ifdef CONFIG_MTRACE
    if (!is_inst) {
        printf("[mtrace(mem)] write addr = 0x%08x, len = %d, data = 0x%08x\n",  addr, len, data);
    }
#endif

}

const uint8_t* get_pmem_ptr() {
    return pmem;
}
