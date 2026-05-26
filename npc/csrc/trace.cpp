#include "trace.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <capstone.h>

static csh handle;
static bool capstone_inited = false;

static void init_capstone() {
    if (capstone_inited) {
        return;
    }

    // 初始化 riscv32
    if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle) != CS_ERR_OK) {
        printf("Failed to initialize capstone\n")
        exit(1);
    }

    // AT&T 风格等可选配置
    cs_option(handle, CS_OPT_DETAIL, CS_OPT_OFF);
}


extern "C" void npc_itrace(uint32_t pc, uint32_t inst) {
    init_capstone();

    uint8_t code[4];

    // RISC-V 小端
    memcpy(code, &inst, 4);

    cs_insn *insn;

    size_t count = cs_disasm(
        handle,         // capstone handle
        code,           // machine code
        4,              // code size
        pc,             // address
        1,              // disasm one instruction
        &insn
    );

    if (count > 0) {

        printf(
            "0x%08x: %-8s %s\n",
            pc,
            insn[0].mnemonic,
            insn[0].op_str
        );

        cs_free(insn, count);
    }
    else {
        printf(
            "0x%08x: unknown instruction 0x%08x\n",
            pc,
            inst
        );
    }
}


