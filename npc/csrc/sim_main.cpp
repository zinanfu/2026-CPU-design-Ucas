#include <verilated.h>
#include "VCpuTop.h"

#include "pmem.h"
#include "ftrace.h"

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>


void step_once(VCpuTop *top);
void print_regs(VCpuTop* top);
void repl_loop(VCpuTop* top);

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    VCpuTop* top = new VCpuTop;

    // init memory
    init_pmem(128 * 1024 * 1024, 0x80000000);

    // load image
    if (argc > 1) {
        bool success = load_image(argv[1], 0x80000000);
        if (!success) {
            printf("Error: load is wrong\n");
        }
    }

#ifdef CONFIG_FTRACE
    printf("The argc is %d\n", argc);
    const char* elf_path = (argc > 2) ? argv[2] : argv[1];

    init_ftrace(elf_path);
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
    // int sign = 0;

    repl_loop(top);

    delete top;

    free_pmem();

    return 0;
}

void step_once(VCpuTop *top) {
    uint32_t pc = top->io_pc;
    if (pc < 0x80000000 || pc > 0x80100000) {
        printf("BAD PC = 0x%08x\n", pc);
        return;
    }

    uint32_t inst = paddr_read(pc, 4, true);
    
    if (inst == 0x0000006f) {
        printf("Hit GOOD TRAP\n");
        Verilated::gotFinish(true);
        return;
    }

    // instruction fetch

    top->io_inst = inst;

    // clock low
    top->clock = 0;
    top->eval();

    // data memory read
    top->io_mem_rdata = paddr_read(top->io_mem_addr, 4, false);

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
}

void print_regs(VCpuTop* top) {
    printf("If the isa is riscv32e, then the last 16 reg is 0!\n");
    for (int i = 0; i < 32; i++) {
        printf("reg%2d:\t0x%08x\n", i, top->io_debug_regs_flat[i]);
    }
}

void repl_loop(VCpuTop* top) {
    std :: string line; // 命名空间 std 中的类 string

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
                step_once(top);
                if (Verilated :: gotFinish()) {
                    break;
                }
            }
        }
        else if (cmd == "c") {
            while (!Verilated :: gotFinish()) {
                step_once(top);
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
                else {
                    std :: cout << "Please use info r\n";
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
        else if (cmd == "q") {
            Verilated :: gotFinish(true);
            break;
        }
        else {
            std :: cout << "Unknown command!\n";
        }
    }

}
