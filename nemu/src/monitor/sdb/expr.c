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
#include <string.h>
#include <memory/vaddr.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, 
  


  /* TODO: Add more token types */
  TK_DEC,       // 123
  TK_HEX,       // 0x123
  TK_REG,       // $a0


  TK_EQ,        // ==
  TK_NEQ,       // !=
  TK_AND,       // &&
  TK_DEREF,     // *(ref)
  TK_NEGATIVE,  // -1
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},          // spaces
  {"\\+", '+'},               // plus
  {"\\-", '-'},               // minor
  {"\\*", '*'},               // mul
  {"/", '/'},                 // div
  {"\\(", '('},               
  {"\\)", ')'},

  {"==", TK_EQ},              // equal
  {"!=", TK_NEQ},             
  {"&&", TK_AND},

  {"0x[0-9a-fA-F]+", TK_HEX}, // hex
  {"[0-9]+", TK_DEC},         // dec
  {"\\$[a-z0-9]+", TK_REG},   // reg

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};


int eval(int p, int q, bool *success);

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[64];
} Token;

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    // printf("position:%d\n", position);
    for (i = 0; i < NR_REGEX; i ++) {
      // printf("match begin\n");
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        // printf("substr_len:%d\n", substr_len);
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if (substr_len > 31) {
          printf("Error: token is longer than 32\n");
        }


        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;


          default: 
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            // printf("nr_token is %d\n", nr_token);
            tokens[nr_token].str[substr_len] = '\0';

            nr_token++;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  // printf("make_token begin\n");
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  // NUMBER
  // printf("nr_token is %d\n", nr_token);

  // if (nr_token == 1) {
  //   *success = true;
  //   if (tokens[0].type == TK_DEC) {
    
  //     return atoi(tokens[0].str);
  //   }
  //   if (tokens[0].type == TK_HEX) {
  //     // printf("Token is TK_HEX\n");
  //     return strtoul(tokens[0].str, NULL, 16); // 16进制字符串转数字
  //   }
  // }

  // 解引用判断
  for (int i = 0; i < nr_token; i++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == '(' || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ || tokens[i - 1].type == TK_AND || tokens[i - 1].type == TK_DEREF || tokens[i-1].type == TK_NEGATIVE)) {
      tokens[i].type = TK_DEREF;
    }
    if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || tokens[i - 1].type == '(' || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ || tokens[i - 1].type == TK_AND || tokens[i - 1].type == TK_DEREF || tokens[i-1].type == TK_NEGATIVE)) {
      // printf("There is a minor\n");
      tokens[i].type = TK_NEGATIVE;
    }
  }

  // for (int i = 0; i < 5; i++) {
  //   printf("The token_type is %c\n", tokens[i].type);
  // }


  // expr
  return eval(0, nr_token - 1, success);

  // printf("Token is NULL\n");
  *success = false;
  return 0;
}


bool check_parentheses(int p, int q) {

  if (tokens[p].type != '(' || tokens[q].type != ')') {
    return false;
  }

  int sign = 0;

  for (int i = p + 1; i < q; i++) {
    if (tokens[i].type == '(') {
      sign += 1;
    }

    if (tokens[i].type == ')') {
      sign -= 1;
    }

    if (sign < 0) {
      return false;
    }

    // if (sign == 0) {
    //   return false;
    // }
  }

  if (sign > 0) {
    return false;
  }

  return true;

}

int op_priority(int type) {
  switch(type) {
    case TK_AND: return 1;
    case TK_EQ:
    case TK_NEQ: return 2;
    case '+': 
    case '-': return 3;
    case '*':
    case '/': return 4;
    // case '(':
    // case ')': return 4;
   
    case TK_NEGATIVE: 
    case TK_DEREF: return 5;
    default: return 100;
  }
}

int find_op_position(int p, int q) {
  int in_sign = 0;
  int op_position = -1;
  int min_pri = 100;

  for (int i = p; i < q; i++) {
    if (tokens[i].type == TK_DEC || tokens[i].type == TK_HEX) {
      continue;
    }
    if (tokens[i].type == '(') {
      in_sign += 1;
    }
    if (tokens[i].type == ')') {
      in_sign -= 1;
    }
    if (in_sign == 0) {
      // if (tokens[i].type == '+' || tokens[i].type == '-') {
      //   op_position = i;
      // }
      // if (tokens[i].type == '*' || tokens[i].type == '/') {
      //   if (op_position == -1) {
      //     op_position = i;
      //   }
      //   else if (tokens[op_position].type == '*' || tokens[op_position].type == '/') {
      //     op_position = i;
      //   }
      // }
      int priority = op_priority(tokens[i].type);

      if (priority == 5 && min_pri == 5) {
        printf("need right\n");
      } else {
        if (priority <= min_pri) {
          op_position = i;
          min_pri = priority;
        }
      }
      

    }
  }

  return op_position;
}

int eval(int p, int q, bool *success) {
  if (p > q) {
    /* Bad expression */
    *success = false;
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    switch (tokens[p].type) {
      case TK_DEC: return atoi(tokens[p].str);
      case TK_HEX: return strtoul(tokens[p].str, NULL, 16);
      case TK_REG: {
            bool reg_success = true;
            word_t val = isa_reg_str2val(tokens[p].str + 1, &reg_success);
            if (!reg_success) {
              *success = false;
            }
            return val;
          }
      default: 
        *success = false;
        return 0;
    }
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  }
  else {
    int op = find_op_position(p, q);

    // printf("The position is %d, the type is %c\n", op, tokens[op].type);

    if (op == -1) {
      *success = false;
      return 0;
    }

    // 访存
    if (tokens[op].type == TK_DEREF) {
      word_t addr = eval(op + 1, q, success);

      return vaddr_read(addr, 4);
    }
    // 负数
    if (tokens[op].type == TK_NEGATIVE) {

      // printf("find a negative\n");
      return - eval(op + 1, q, success);
    }

    int val1 = eval(p, op - 1, success);
    if (!*success) {
      return 0;
    }
    int val2 = eval(op + 1, q, success);
    if (!*success) {
      return 0;
    }

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': {
        if (val2 == 0) {
          printf("Error: div 0\n");
          return 0;
        }
        return val1 / val2;
      }
      
      case TK_EQ: return val1 == val2;
      case TK_NEQ: return val1 != val2;
      case TK_AND: return val1 && val2;
      default: 
        *success = false;
        return 0;
    }
  }
}