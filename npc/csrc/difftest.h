#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <cstdint>
#include <cstddef>

enum {
    DIFFTEST_TO_DUT,
    DIFFTESR_TO_REF
};

// 要与 nemu 中的 cpu_state 布局一样
struct difftest_cpu_state {
    uint32_t gpr[32];
    uint32_t pc;
};

void init_difftest(const char* ref_so_file, const uint8_t* img_start, size_t img_size);
void difftest_step(uint32_t pc, uint32_t* regs);


#endif