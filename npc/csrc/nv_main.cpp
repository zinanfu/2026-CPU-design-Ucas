#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"

static Vtop* top = NULL;

void nvboard_bind_all_pins(Vtop* top);

int main() {
    nvboard_init();

    top = new Vtop;

    nvboard_bind_all_pins(top);

    while (1) {
        top->clk = !top->clk;
        top->eval();
        nvboard_update();
    }

    delete top;
    return 0;
}
