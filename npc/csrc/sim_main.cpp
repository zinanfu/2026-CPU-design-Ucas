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
        load_image(argv[1], 0x80000000);
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

    while (!Verilated::gotFinish()) {

        uint32_t pc = top->io_pc;
        if (pc < 0x80000000 || pc > 0x80100000) {
            printf("BAD PC = 0x%08x\n", pc);
            break;
        }
        uint32_t inst = paddr_read(pc,4);
        // printf("pc = 0x%08x inst = 0x%08x\n", pc, inst);


        // instruction fetch
        // top->io_inst =
        //     paddr_read(top->io_pc, 4);

        top->io_inst = inst;

        // data memory read
        top->io_mem_rdata =
            paddr_read(top->io_mem_addr, 4);

        // clock low
        top->clock = 0;
        top->eval();

        // clock high
        top->clock = 1;
        top->eval();

        // memory write
        if (top->io_mem_wen) {

            paddr_write(
                top->io_mem_addr,
                4,
                top->io_mem_wdata
            );
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