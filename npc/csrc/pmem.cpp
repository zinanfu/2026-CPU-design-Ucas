#include "pmem.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <sys/time.h>

static uint8_t *pmem = nullptr;
static size_t pmem_size = 0;
static uint32_t pmem_base_addr = 0;
static uint64_t rtc_boot_us = 0;

void init_pmem(size_t size, uint32_t base) {
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

void paddr_write(uint32_t addr, int len, uint32_t data, uint8_t wmask, bool is_inst) {
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
