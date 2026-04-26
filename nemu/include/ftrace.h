#ifndef __FTRACE_H__
#define __FTRACE_H__

#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <elf.h>

#include <generated/autoconf.h>
#include <macro.h>
#include <memory/paddr.h>


#define MAX_FUNC 256
#define MAX_DEPTH 100

typedef struct {
    paddr_t addr;
    paddr_t size;
    char name[64];
} Func;

extern Func func_table[MAX_FUNC];
extern int func_cnt;



extern paddr_t call_stack[MAX_DEPTH];
extern int depth;


void init_ftrace(char* elf_file);

char* find_func(paddr_t addr);

void ftrace_call(paddr_t addr, paddr_t pc);
void ftrace_ret(paddr_t pc);  



#endif