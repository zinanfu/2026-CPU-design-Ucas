#include <common.h>
#include "syscall.h"

static void do_write(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  int fd = a[1];
  char *buf = (char *)a[2];
  size_t len = a[3];

  if (fd == 1 || fd == 2) {
    for (size_t i = 0; i < len; i++) {
      putch(buf[i]);
    }
    c->GPR2 = len;
  }
  else {
    c->GPR2 = -1;
  }


}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

#if CONFIG_STRACE
  Log("[strace] syscall ID:%d, arg1:%d, arg2:%d, arg3:%d\\n", a[0], a[1], a[2], a[3]);
#endif


  switch (a[0]) {
    case 0: halt(a[0]); break;
    case 1: yield(); c->GPR2 = 0; break;  // sys_yield

    case 4: do_write(c); break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


