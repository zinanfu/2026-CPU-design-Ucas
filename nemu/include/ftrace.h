#ifndef __FTRACE_H__
#define __FTRACE_H__

#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include <generated/autoconf.h>
#include <macro.h>



typedef struct {
    paddr_t addr;
    paddr_t size;
    char name[64];
} Func;

Func func_table[256];
int func_cnt;

#define MAX_DEPTH 100

paddr_t call_stack[MAX_DEPTH];
int depth = 0;


void init_ftrace(char* elf_file);

char* find_func(paddr_t addr);

void ftrace_call(paddr_t addr, paddr_t pc);
void ftrace_ret(paddr_t pc);  



#endif