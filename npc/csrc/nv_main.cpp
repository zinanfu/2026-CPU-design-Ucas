#include "Vtop.h"
#include "verilated.h"
#include <iostream>

#include  <nvboard.h>
#include "verilated_fst_c.h"

int main() {
    Vtop* top = new Vtop;

    nvboard_init();
    nvboard_bind_all_pins(top);

    while(1) {
        top->eval();
        nvboard_update();
    }
}
