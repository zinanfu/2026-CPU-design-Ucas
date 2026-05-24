#include <verilated.h>
#include "VCpuTop.h"

#include "pmem.h"

vluint64_t sim_time = 0;

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

    while (!Verilated::gotFinish()) {

        uint32_t pc = top->io_pc;
        if (pc < 0x80000000 || pc > 0x80100000) {
            printf("BAD PC = 0x%08x\n", pc);
            break;
        }
        uint32_t inst = paddr_read(pc,4);

        // uint32_t opcode = inst & 0x7f;

        // if (sign == 1) {
        //     printf("pc = 0x%08x inst = 0x%08x\n", pc, inst);
        //     break;
        // }

        // if (opcode == 0x6f) {
        //     printf("pc = 0x%08x inst = 0x%08x\n", pc, inst);

        //     sign = 1;
        // }
        printf("pc = 0x%08x inst = 0x%08x\n", pc, inst);
        
        if (inst == 0x0000006f) {
            printf("Hit GOOD TRAP\n");
            break;
        }

        // instruction fetch

        top->io_inst = inst;

        // clock low
        top->clock = 0;
        top->eval();

        // data memory read
        top->io_mem_rdata = paddr_read(top->io_mem_addr, 4);

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

            paddr_write(top->io_mem_addr, len, top->io_mem_wdata, top->io_mem_wmask);
        }

        sim_time++;

        if (sim_time > 1000000) {
            break;
        }
    }

    delete top;

    free_pmem();

    return 0;
}