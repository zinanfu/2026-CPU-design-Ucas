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


void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

// int main(int argc, char *argv[]) {
//   /* Initialize the monitor. */
// #ifdef CONFIG_TARGET_AM
//   am_init_monitor();
// #else
//   init_monitor(argc, argv);
// #endif

//   /* Start engine. */
//   engine_start();

//   return is_exit_status_bad();
// }

word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {

  if (argc != 2) {
    printf("Usage: %s input_file\n", argv[0]);
    return 1;
  }

  init_monitor(argc, argv);
  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL) {
    perror("fopen");
    return 1;
  }

  char expr_buf[65536];
  unsigned expected;

  while (fscanf(fp, "%u %[^\n]", &expected, expr_buf) == 2) {
    // printf("test begin\n");
    printf("expr: %s\n", expr_buf);
    bool success = true;
    word_t result = expr(expr_buf, &success);

    // printf("expr is done\n");
    if (!success) {
      printf("Bad expression: %s\n", expr_buf);
      continue;
    }

    if (result != expected) {
      printf("Mismatch!\n");
      printf("expr: %s\n", expr_buf);
      printf("expected: %u\n", expected);
      printf("got: %u\n", result);
      return 1;
    }
  }

  printf("All tests passed!\n");

  fclose(fp);
  return 0;
}