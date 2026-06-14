#include <common.h>
#include "syscall.h"
#include "proc.h"
#include "fs.h"

#define CONFIG_STRACE 0
extern Finfo file_table[];

static void do_write(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  int fd = a[1];
  char *buf = (char *)a[2];
  size_t len = a[3];

  // if (fd == 1 || fd == 2) {
  //   for (size_t i = 0; i < len; i++) {
  //     putch(buf[i]);
  //   }
  //   c->GPR2 = len;
  // }
  // else {
  //   c->GPR2 = fs_write(fd, (const void *)buf, len);
  // }

  c->GPR2 = fs_write(fd, (const void *)buf, len);
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
// get_time_of_day
struct timeval {
  long tv_sec;
  long tv_usec;
};

// static void do_gettime(Context *c) {
//   struct timeval *tv = (struct timeval *)c->GPR2;

//   AM_TIMER_UPTIME_T uptime;
//   uptime = io_read(AM_TIMER_UPTIME);
//   tv->tv_sec  = uptime.us / 1000000;
//   tv->tv_usec = uptime.us % 1000000;
//   c->GPR2 = 0;

// }

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

#if CONFIG_STRACE
  const char *syscall_name[] = {
    [0] = "exit",
    [1] = "yield",
    [2] = "open",
    [3] = "read",
    [4] = "write",

    [7] = "close",
    [8] = "lseek",
    [9] = "brk",     
    
    [19] = "gettimeofday",
  };  

  const char *name;
  if (a[0] < 20 && syscall_name[a[0]]) {
    name = syscall_name[a[0]];
  }
  else {
    name = "???";
  }

  switch(a[0]) {
    case 2:
      Log("[strace] open: path: %s, flags = %d, mode = %d\n", a[1], a[2], a[3]);
      break;
    case 3:
    case 4:
      Log("[strace] %s: fd = %d, file_name: %s, buf: %p, len = %d\n", name, a[1], file_table[a[1]].name, (void *)a[2], a[3]);
      break;
    case 7:
      Log("[strace] close: fd = %d, file_name: %s\n", a[1], file_table[a[1]].name);
      break;
    case 8:
      Log("[strace] lseek: fd = %d, file_name: %s, offset = %d, whence = %d\n", a[1], file_table[a[1]].name, a[2], a[3]);
      break;
    default:
      Log("[strace] %s (arg1=%d, arg2=%d, arg3=%d)", name, a[1], a[2], a[3]); 
  }
  
#endif


  switch (a[0]) {
    case 0: halt(a[0]); break;
    case 1: yield(); c->GPR2 = 0; break;  // sys_yield
    case 2: c->GPR2 = fs_open((const char *)a[1], a[2], a[3]); break;
    case 3: do_read(c); break;
    case 4: do_write(c); break;

    case 7: c->GPR2 = fs_close(a[1]); break;
    case 8: c->GPR2 = fs_lseek(a[1], a[2], a[3]); break;
    case 9: do_brk(c); break;           // 堆区管理

    // case 19: do_gettime(c); break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


