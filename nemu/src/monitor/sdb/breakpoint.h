#ifndef __BREAKPOINT_H__
#define __BREAKPOINT_H__

#include <common.h>

typedef struct breakpoint {
  int NO;
  struct breakpoint *next;
  vaddr_t addr;
} BP;

void init_bp_pool();
BP* new_bp();
void free_bp(int id);
void list_bp();
bool check_bp(vaddr_t pc);

#endif
