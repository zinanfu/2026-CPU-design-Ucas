#include "Vtop.h"
#include "verilated.h"
#include <iostream>

#include "verilated_fst_c.h"

vluint64_t sim_time = 0;   // ✅ 全局时间

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    Verilated::traceEverOn(true);   // ✅ 必须打开

    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("wave.fst");

    // 测试所有输入组合
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {

            top->a = a;
            top->b = b;

            top->eval();

            // ✅ 每次变化都 dump
            tfp->dump(sim_time);
            sim_time++;

            std::cout << "a=" << a
                      << " b=" << b
                      << " f=" << (int)top->f
                      << std::endl;
        }
    }

    tfp->close();
    delete top;
    return 0;
}
