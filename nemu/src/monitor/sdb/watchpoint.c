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

#include "sdb.h"
#include "watchpoint.h"
#define NR_WP 32



static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp() {
  if (free_ == NULL) {
    assert(0);
  }

  WP *wp = free_;
  free_ = free_ -> next;

  wp->next = head;
  head = wp;

  return wp;

}

void free_wp(WP *wp) {
  if (wp == NULL) {
    assert(0);
  }
  if (head == NULL) {
    assert(0);
  }

  if (head == wp) {
    head = head -> next;
  } 
  else {
    WP *next_wp;
    next_wp = head;
    while (next_wp -> next != NULL && next_wp -> next != wp) {
      next_wp = next_wp -> next;
    }

    if (next_wp -> next == NULL) {
      printf("Error: watchpoint not found\n");
      return;
    }

    next_wp -> next = wp -> next;
  }

  wp -> next = free_;
  free_ = wp;
}

void d_wp(int id) {
  WP *wp = head;
  WP *cur = NULL;

  if (wp == NULL) {
    printf("Error: no watchpoint\n");
    assert(0);
  }

  if (head -> NO == id) {
    free_wp(head);
    return;
  }
  while (wp -> next != NULL) {
    cur = wp -> next;
    if (cur -> NO == id) {
      free_wp(cur);
      return;
    }
    wp = cur;
  }
  printf("Warning: watchpoint not found!\n");
}

void print_watchpoint() {
  WP *wp = head;

  if (wp == NULL) {
    printf("Error: no watchpoint\n");
    assert(0);
  }

  while (wp != NULL) {
    printf("NO:%d\t%s\t0x%x\n", wp -> NO, wp -> expr, wp -> last_value);
    wp = wp -> next;
  }
}

bool check_watchpoint() {
  WP *wp = head;

  while (wp != NULL) {
    bool success = true;
    word_t new_value = expr(wp->expr, &success);

    if (!success) {
      printf("Error: wrong expression\n");
    }

    if (new_value != wp -> last_value) {
      printf("Watchpoint NO%d\t%s is changed!\n", wp -> NO, wp -> expr);
      printf("Old value:\t%d\n", wp -> last_value);
      printf("New valueL\t%d\n", new_value);

      wp -> last_value = new_value;
      return true;
    }

    wp = wp -> next;
  }

  return false;
}
