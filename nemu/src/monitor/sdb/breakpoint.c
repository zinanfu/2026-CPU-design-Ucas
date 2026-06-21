#include "breakpoint.h"

#define NR_BP 16

static BP bp_pool[NR_BP] = {};
static BP *head = NULL, *free_ = NULL;

void init_bp_pool() {
  int i;
  for (i = 0; i < NR_BP; i ++) {
    bp_pool[i].NO = i;
    bp_pool[i].addr = 0;
    bp_pool[i].next = (i == NR_BP - 1 ? NULL : &bp_pool[i + 1]);
  }
  head = NULL;
  free_ = bp_pool;
}

BP* new_bp() {
  if (free_ == NULL) {
    printf("Error: no free breakpoint slot\n");
    return NULL;
  }

  BP *bp = free_;
  free_ = free_->next;

  bp->next = head;
  head = bp;

  return bp;
}

void free_bp(int id) {
  if (head == NULL) {
    printf("Error: no breakpoints\n");
    return;
  }

  BP *bp = head;
  BP *prev = NULL;

  while (bp != NULL && bp->NO != id) {
    prev = bp;
    bp = bp->next;
  }

  if (bp == NULL) {
    printf("Error: breakpoint %d not found\n", id);
    return;
  }

  if (prev == NULL) {
    head = bp->next;
  } else {
    prev->next = bp->next;
  }

  bp->next = free_;
  bp->addr = 0;
  free_ = bp;

  printf("Breakpoint %d deleted\n", id);
}

void list_bp() {
  if (head == NULL) {
    printf("No breakpoints\n");
    return;
  }

  printf("Breakpoints:\n");
  BP *bp = head;
  while (bp != NULL) {
    printf("  %d: " FMT_WORD "\n", bp->NO, bp->addr);
    bp = bp->next;
  }
}

bool check_bp(vaddr_t pc) {
  BP *bp = head;
  while (bp != NULL) {
    if (bp->addr == pc) {
      printf("Hit breakpoint %d at " FMT_WORD "\n", bp->NO, pc);
      return true;
    }
    bp = bp->next;
  }
  return false;
}
