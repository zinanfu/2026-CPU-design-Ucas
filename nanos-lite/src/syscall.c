#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case 0: halt(a[0]); break;
    case 1: yield(); c->GPR2 = 0; break;  // sys_yield

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
