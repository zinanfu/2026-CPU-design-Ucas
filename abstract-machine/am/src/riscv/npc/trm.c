#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include <stdio.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  /* write to serial MMIO so simulator's paddr_write can catch it */
  outb(0x10000000, (uint8_t)ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : : "r"(code));
  while (1);
}

void _trm_init() {
  uint32_t mvendorid, marchid;
  asm volatile("csrrs %0, 0xf11, x0" : "=r"(mvendorid));
  asm volatile("csrrs %0, 0xf12, x0" : "=r"(marchid));

  printf("ysyx: 0x%08x\n", mvendorid);
  printf("学号: %d\n", marchid);

  int ret = main(mainargs);
  halt(ret);
}
