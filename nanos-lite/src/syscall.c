#include <common.h>
#include "syscall.h"
#include "proc.h"
#include "fs.h"

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
    c->GPR2 = fs_write(fd, (const void *)buf, len);
  }


}

static void do_read(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  int fd = a[1];
  char *buf = (char *)a[2];
  size_t len = a[3];

  if (fd == 0) {
    printf("stdin\n");
  }
  else {
    c->GPR2 = fs_read(fd, (void *)buf, len);
  }

}


// 已实现 brk 更新
static void do_brk(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  // a[2] = c->GPR3;
  // a[3] = c->GPR4;

  uintptr_t pg_brk = a[1];

  current->max_brk = pg_brk;

  c->GPR2 = 0;
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
    case 2: c->GPR2 = fs_open((const char *)a[1], a[2], a[3]); break;
    case 3: do_read(c); break;
    case 4: do_write(c); break;

    case 7: c->GPR2 = fs_close(a[1]); break;
    case 8: c->GPR2 = fs_lseek(a[1], a[2], a[3]); break;
    case 9: do_brk(c); break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


