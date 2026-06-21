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

#ifdef CONFIG_ETRACE
static const char* etrace_cause_name(word_t NO) {
  if (NO & 0x80000000) {
    switch (NO & 0x7fffffff) {
      case 3:  return "Machine software interrupt";
      case 7:  return "Machine timer interrupt";
      case 11: return "Machine external interrupt";
      default: return "Unknown interrupt";
    }
  }
  // 异常
  switch (NO) {
    case 0x0: return "Instruction address misaligned";
    case 0x1: return "Instruction access fault";
    case 0x2: return "Illegal instruction";
    case 0x3: return "Breakpoint";
    case 0x5: return "Load access fault";
    case 0x7: return "Store access fault";
    case 0x8: return "ECALL from U-mode";
    case 0x9: return "ECALL from S-mode";
    case 0xb: return "ECALL from M-mode";
    default:  return "Unknown exception";
  }
}

#endif

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */ 

  cpu.mepc = epc;
  cpu.mstatus = (cpu.mstatus & ~(3 << 11)) | (3 << 11);
  cpu.mcause = NO;

#ifdef CONFIG_ETRACE
  Log("[etrace] intr: cause:%s(0x%x), epc=0x%x, jump to mtvec=0x%x", etrace_cause_name(NO), NO, epc, cpu.mtvec);
#endif

  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
