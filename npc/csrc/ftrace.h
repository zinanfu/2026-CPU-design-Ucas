#ifndef __FTRACE_H__
#define __FTRACE_H__

#include <stdio.h>
#include <stdint.h>
#include <elf.h>

#define MAX_FUNC 256
#define MAX_DEPTH 100

typedef struct
{
    uint32_t addr;
    uint32_t size;
    char name[64];
} Func;


void init_ftrace(const char* elf_file);
char *find_func(uint32_t addr);
void ftrace_call(uint32_t call_target, uint32_t pc);
void ftrace_ret(uint32_t pc);
void ftrace_check(uint32_t inst, uint32_t pc, uint32_t (*read_arg)(int reg_idx));

#endif