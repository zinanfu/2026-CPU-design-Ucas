#include <verilated.h>
#include "VCpuTop.h"

#include "pmem.h"
#include "ftrace.h"
#include "difftest.h"

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <set>


bool step_once(VCpuTop *top);
void print_regs(VCpuTop* top);
void repl_loop(VCpuTop* top);

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    VCpuTop* top = new VCpuTop;

    // init memory
    init_pmem(128 * 1024 * 1024, 0x80000000);

    // parse arguments: skip flags, extract positional args
    bool batch_mode = false;
    const char* img_path = nullptr;
    const char* elf_path = nullptr;
    const char* diff_so_path = nullptr;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--batch") == 0) {
            batch_mode = true;
        } else if (img_path == nullptr) {
            img_path = argv[i];
        } else if (elf_path == nullptr) {
            elf_path = argv[i];
        } else if (diff_so_path == nullptr) {
            diff_so_path = argv[i];
        }
    }

    // load image
    if (img_path) {
        bool success = load_image(img_path, 0x80000000);
        if (!success) {
            printf("Error: load is wrong\n");
        }
    }

#ifdef CONFIG_DIFFTEST
    size_t img_size = 128 * 1024 * 1024;

    if (diff_so_path) {
        init_difftest(diff_so_path, get_pmem_ptr(), img_size);
    }

#endif

#ifdef CONFIG_FTRACE
    const char* ftrace_elf = elf_path ? elf_path : img_path;

    init_ftrace(ftrace_elf);
#endif

    // reset
    top->reset = 1;

    for (int i = 0; i < 10; i++) {

        top->clock = 0;
        top->eval();

        top->clock = 1;
        top->eval();
    }

    top->reset = 0;

    if (batch_mode) {
        printf("Batch mode: running to completion...\n");
        while (!Verilated::gotFinish()) {
            if (!step_once(top)) break;
        }
        printf("Simulation finished.\n");
    } else {
        repl_loop(top);
    }

    delete top;

    free_pmem();

    return 0;
}

static uint64_t cycle_count = 0;

bool step_once(VCpuTop *top) {
    // uint32_t pc = top->io_pc;
    // if (pc < 0x80000000 || pc > 0x80100000) {
    //     printf("BAD PC = 0x%08x\n", pc);
    //     return false;
    // }

    // uint32_t inst = paddr_read(pc, 4, true);
    cycle_count++;

    // if (top->io_debug_inst == 0x00100073) {
    //     uint32_t code = top->io_debug_regs_flat[10];
    //     if (code == 0) {
    //         printf("Hit GOOD TRAP (code = %d)\n", code);
    //     }
    //     else {
    //         printf("Hit BAD TRAP (code = %d)\n", code);
    //     }
    //     printf("Total cycles: %lu (including %d reset cycles)\n", cycle_count + 10, 10);

    //     Verilated::gotFinish(true);
    //     return false;
    // }

    // instruction fetch
    
    // top->io_inst = inst;

    // clock low
    top->clock = 0;
    top->eval();



    // data memory read
    if (top->io_mem_ren) {
        top->io_mem_rdata = paddr_read(top->io_mem_addr, 4, false);
    }

    // clock high
    top->clock = 1;
    top->eval();

    // memory write
    int len = 4;

    switch(top->io_mem_wmask) {
        case 0x1: len = 1; break;
        case 0x3: len = 2; break;
        case 0xf: len = 4; break;
    }
  
    if (top->io_mem_wen) {
        paddr_write(top->io_mem_addr, len, top->io_mem_wdata, top->io_mem_wmask, false);
    }
    // debug
#ifdef CONFIG_FTRACE
    if (top->io_debug_valid) {
        // printf("pc = 0x%08x inst = 0x%08x\n", top->io_debug_pc, top->io_debug_inst);
        ftrace_check(top->io_debug_inst, top->io_debug_pc, top->io_debug_regs_flat);
    }
#endif

#ifdef CONFIG_DIFFTEST
    if (top->io_debug_valid) {
        difftest_step(top->io_pc, top->io_debug_regs_flat);
    }
    
#endif

    return true;
}

void print_regs(VCpuTop* top) {
    printf("If the isa is riscv32e, then the last 16 reg is 0!\n");
    for (int i = 0; i < 32; i++) {
        printf("reg%2d:\t0x%08x\n", i, top->io_debug_regs_flat[i]);
    }
}

void repl_loop(VCpuTop* top) {
    std :: string line; // 命名空间 std 中的类 string
    std :: set<uint32_t> breakpoints; // 断点集合
    std :: set<uint32_t> checkpoints;

    while(!Verilated::gotFinish()) {
        std :: cout << "sdb:\n" ; // 输出 sdb 到终端

        if (!std :: getline(std :: cin, line)) { // std :: cin 为标准输入流
            break;
        }

        std :: istringstream iss(line);
        std :: string cmd;

        if (!(iss >> cmd)) { // 将 line 变为可拆分的形式，并将 iss 中的一个单词存入 cmd 中
            continue;
        }

        if (cmd == "si") {
            int n = 1;
            if (!(iss >> n)) { // si 10
                n = 1;
            }
            for (int i = 0; i < n; i++) {
                bool sign = step_once(top);
                // printf("pc  = 0x%08x\n", top->io_si_pc);
                // printf("inst= 0x%08x\n", top->io_si_inst);
                printf("debug_pc = 0x%08x\n", top->io_debug_pc);
                printf("debug_inst= 0x%08x\n", top->io_debug_inst);

                if (Verilated :: gotFinish()) {
                    break;
                }
                if (sign == false) {
                    break;
                }
                // // 单步执行后检查断点
                // if (breakpoints.count(top->io_pc)) {    // 	返回元素出现次数
                //     printf("Hit breakpoint at 0x%08x\n", top->io_pc);
                //     break;
                // }
                // if (checkpoints.count(top->io_debug_regs_flat[1])) {
                //     printf("BAD RA at pc:0x%8x\n", top->io_debug_pc);
                //     break;
                // }
            }
        }
        else if (cmd == "c") {
            bool sign = true;
            while (!Verilated :: gotFinish() && sign) {
                sign = step_once(top);
                // if (breakpoints.count(top->io_pc)) {
                //     printf("Hit breakpoint at 0x%08x\n", top->io_pc);
                //     break;
                // }
                // if (checkpoints.count(top->io_debug_regs_flat[1])) {
                //     printf("BAD RA at pc:0x%8x\n", top->io_debug_pc);
                //     break;
                // }
                
            }
        }
        else if (cmd == "info") {
            std :: string sub;
            if (!(iss >> sub)) {
                std :: cout << "Please use info r\n";
            }
            else {
                if (sub == "r") {
                    print_regs(top);
                }
                else if (sub == "b") {
                    if (breakpoints.empty()) {
                        std :: cout << "No breakpoints\n";
                    }
                    else {
                        printf("Breakpoints (%zu):\n", breakpoints.size());
                        for (auto bp : breakpoints) {
                            printf("  0x%08x\n", bp);
                        }
                    }
                }
                else {
                    std :: cout << "Please use info r or info b\n";
                }
            }
        }
        else if (cmd == "x") {
            int n;
            uint32_t addr;
            if (!(iss >> n >> std :: hex >> addr)) {
                std :: cout << "Please use x n addr(hex)\n";
            }
            else {
                for (int i = 0; i < n; i++) {
                    uint32_t data = paddr_read(addr + i * 4, 4, 1); // x 的记录不用存在 mtrace 中
                    printf("0x%08x: 0x%08x", addr + i * 4, data);
                }
            }

        }
        else if (cmd == "b") {
            uint32_t addr;
            if (!(iss >> std :: hex >> addr)) {
                std :: cout << "Please use b <addr(hex)>\n";
            }
            else {
                breakpoints.insert(addr);
                printf("Breakpoint %zu set at 0x%08x\n", breakpoints.size(), addr);
            }
        }
        else if (cmd == "d") {
            uint32_t addr;
            if (!(iss >> std :: hex >> addr)) {
                std :: cout << "Please use d <addr(hex)>\n";
            }
            else {
                auto it = breakpoints.find(addr);
                if (it != breakpoints.end()) {          // 一个标识，find 没找到就是 breakpoints.end()
                    breakpoints.erase(it);
                    printf("Breakpoint at 0x%08x deleted, %zu remaining\n", addr, breakpoints.size());
                }
                else {
                    printf("No breakpoint at 0x%08x\n", addr);
                }
            }
        }
        else if (cmd == "w") {
            checkpoints.insert(0x1880);
        }
        else if (cmd == "q") {
            Verilated :: gotFinish(true);
            break;
        }
        else {
            std :: cout << "Unknown command!\n";
        }
    }

}
