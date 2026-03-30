/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>

#define IRINGBUF_SIZE 16

typedef struct {
  char buf[IRINGBUF_SIZE][128];
  int head;
  int count;

} iringbuf_t;

static iringbuf_t iringbuf;

extern uint64_t g_nr_guest_inst;

#ifndef CONFIG_TARGET_AM
FILE *log_fp = NULL;

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}
#endif

void init_iringbuf() {
  iringbuf.head = 0;
  iringbuf.count = 0;
}

void iringbuf_write(const char* log) {
  snprintf(iringbuf.buf[iringbuf.head], 128, "%s", log);

  iringbuf.head = (iringbuf.head + 1) % IRINGBUF_SIZE;

  if (iringbuf.count < IRINGBUF_SIZE) {
    iringbuf.count++;
  }

}

void iringbuf_print() {
  int start = (iringbuf.head - iringbuf.count + IRINGBUF_SIZE) % IRINGBUF_SIZE;

  for (int i = 0; i < iringbuf.count; i++) {
    int idx = (start + i) % IRINGBUF_SIZE;
    printf("%s\n", iringbuf.buf[idx]);
  }
}


