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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "watchpoint.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static bool isdigits(const char *s) {
  for (size_t idx = 0; s[idx] != '\0'; ++idx) {
    if (!isdigit(s[idx])) return false;
  }
  return true;
}

static int cmd_c(char *args) {
  cpu_exec(-1);  // unsigned 中的极大
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);
// Add commands
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_watch(char *args);
static int cmd_d(char *args);
static int cmd_ir(char *args);
static int cmd_p(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Modify the step of CPU", cmd_si},
  { "info", "Info command", cmd_info},
  { "x", "Scan memory", cmd_x},
  { "w", "Watch the expr", cmd_watch},
  { "d", "Delete the watchpoint", cmd_d},
  { "ir", "Iringbuf debug message", cmd_ir},
  { "p", "Evaluate expression", cmd_p}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args) {
  // 未提供参数时，默认执行一条指令
  int n = 1;

  if (args != NULL) {
    n = atoi(args);
  }

  cpu_exec(n);

  return 0;
}


static int cmd_ir(char* args) {
  iringbuf_print();

  return 0;
}

static int cmd_info(char *args) {
  if (args == NULL) {
    printf("Usage: info r\n");
    assert(0);
  }
  if (strcmp(args, "r") == 0) {
    printf("The value of registers:\n");
    isa_reg_display();
  }
  else if (strcmp(args, "w") == 0) {
    
    print_watchpoint();
  }

  return 0;
}

static int cmd_x(char *args) {
  int n = 0;
  bool success = true;
  
  if (args == NULL) {
    printf("Error: invalid cmd\n");
    assert(0);
  }

  char *N_str = strtok(args, " ");
  char *EXPR_str = strtok(NULL, " ");

  n = atoi(N_str);

  vaddr_t addr = expr(EXPR_str, &success); 

  if (success == false) {
    printf("Error: invalid addr\n");
    return 0;
  }

  for (int i = 0; i < n; i++) {
    word_t data = vaddr_read(addr + i * 4, 4);
    printf("0x%08x:\t0x%08x\n",addr + i * 4, data);
  }

  return 0;
}

static int cmd_watch(char *args) {
  if (args == NULL) {
    printf("Error: invalid expr\n");
    assert(0);
  }

  WP *wp = new_wp();
  bool success = true;

  snprintf(wp->expr, sizeof(wp->expr), "%s", args);

  wp->last_value = expr(wp->expr, &success);

  if (success == false) {
    free_wp(wp);
    printf("Error: bad expression!\n");
    return 0;
  }

  printf("Watchpoint NO:%d\t%s\t0x%x\n", wp -> NO, wp -> expr, wp -> last_value);
  return 0;
}

static int cmd_d(char *args) {
  int id = 0;

  if (args == NULL) {
    printf("Error: invalid expr\n");
    assert(0);
  }

  if (!isdigits(args)) {
    printf("Error: not num\n");
    return 0;
  }

  id = atoi(args);

  d_wp(id);

  return 0;
}

static int cmd_p(char *args) {
  bool success = true;

  word_t result = expr(args, &success);

  if (success) {
    printf("%d\n", result);
  }
  else {
    printf("Error: bad expression\n");
  }

  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        // 优美地退出
        if (cmd_table[i].handler(args) < 0) { // 返回负数 
          nemu_state.state = NEMU_QUIT;
          return; 
        }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
