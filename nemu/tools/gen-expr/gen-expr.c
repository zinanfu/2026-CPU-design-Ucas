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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

uint32_t choose(uint32_t n) {
  int random_n = rand() % n;
  return random_n;
}

static void gen_num() {
  int digit = choose(3);

  int len = strlen(buf);
  buf[len] = choose(9) + '1'; // 第一项不为 0

  for (int i = 0; i < digit; i++) {
    buf[len + 1] = choose(10) + '0';
    len += 1;
  }

  buf[len + 1] = '\0';
}

static void gen(char c) {
  int len = strlen(buf);
  buf[len] = c;
  buf[len + 1] = '\0';
}

static void gen_rand_op() {
  // int len = strlen(buf);
  
  switch (choose(6)) {
    case 0: strcat(buf, "+"); break;
    case 1: strcat(buf, "*"); break;
    case 2: strcat(buf, "/"); break;
    case 3: strcat(buf, "=="); break;
    case 4: strcat(buf, "&&"); break;
    case 5: strcat(buf, "-"); break;
  }
  // buf[len + 1] = '\0';
}

static void gen_rand_expr(int depth) {
  if (depth > 10) {
    gen_num();
    return;
  }

  switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(depth + 1); gen(')'); break;
    default: gen_rand_expr(depth + 1); gen_rand_op(); if(buf[strlen(buf) - 1] == '/') {gen_num();} else {gen_rand_expr(depth + 1);}; break;
  }
}


// static void gen_space() {
//   int n = choose(3);

//   for (int i = 0; i < n; i++) {
//     strcat(buf, " ");
//   }
// }


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
