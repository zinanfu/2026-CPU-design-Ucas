#include "difftest.h"
#include <dlfcn.h> // 动态链接
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>

static void (*ref_difftest_init)(int)                               = nullptr;
static void (*ref_difftest_memcpy)(uint32_t, void*, size_t, bool)   = nullptr;
static void (*ref_difftest_regcpy)(void*, bool)                     = nullptr;
static void (*ref_difftest_exec)(uint64_t)                          = nullptr;


void init_difftest(const char* ref_so_file, const uint8_t* img_start, size_t img_size) {
    assert(ref_so_file);

    // 加载 nemu 的 so 文件
    void* handle = dlopen(ref_so_file, RTLD_LAZY); // 懒加载，只有真正调用时才解析地址
    if (!handle) {
        fprintf(stderr, "dlopen failed: %s\n", dlerror());
        exit(1);
    }

    // 函数指针(dlsym 获得的函数指针要强转类型)
    ref_difftest_init      = (void(*) (int))                           dlsym(handle, "difftest_init");
    ref_difftest_memcpy    = (void(*) (uint32_t, void*, size_t, bool)) dlsym(handle, "difftest_memcpy");
    ref_difftest_regcpy    = (void(*) (void*, bool))                   dlsym(handle, "difftest_regcpy");
    ref_difftest_exec      = (void(*) (uint64_t))                      dlsym(handle, "difftest_exec");

    // debug
    assert(ref_difftest_init);
    assert(ref_difftest_memcpy);
    assert(ref_difftest_regcpy);
    assert(ref_difftest_exec);

    ref_difftest_init(0);

    ref_difftest_memcpy(0x80000000, (void*) img_start, img_size, DIFFTESR_TO_REF);

    difftest_cpu_state init_state = {};

    ref_difftest_regcpy(&init_state, DIFFTESR_TO_REF);


}

void difftest_step(uint32_t pc, uint32_t* regs) {
    ref_difftest_exec(1);

    difftest_cpu_state ref_state;
    ref_difftest_regcpy(&ref_state, DIFFTEST_TO_DUT);

    if (ref_state.pc != pc) {
        printf("[DIFFTEST] PC mismatch: npc: 0x%08x, ref: 0x%08x\n", pc, ref_state.pc);
        exit(1);
    }

    for (int i = 0; i < 32; i++) {
        if (ref_state.gpr[i] != regs[i]) {
            printf("[DIFFTEST] r%d mismatch: npc: 0x%08x, ref: 0x%08x, pc: 0x%08x\n", i, regs[i], ref_state.gpr[i], pc);
            exit(1);
        }
    }
}
