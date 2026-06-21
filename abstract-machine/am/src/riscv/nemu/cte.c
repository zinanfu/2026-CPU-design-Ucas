#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include <klib-macros.h>

#define MSTATUS_MIE 0x8
#define XLEN sizeof(uintptr_t)
#define CONTEXT_SIZE  ((NR_REGS + 3) * XLEN)
static Context* (*user_handler)(Event, Context*) = NULL;

// c 就是传入的 sp 也就是存入的上下文
Context* __am_irq_handle(Context *c) {

  // debug
  // for (int i = 0; i < 32; i++) {
  //   printf("r%02d = 0x%08x\n", i, c->gpr[i]);
  // }
  // printf("mcause: 0x%08x\n", c->mcause);
  // printf("mcause: 0x%08x\n", c->mstatus);
  // printf("mcause: 0x%08x\n", c->mepc);


  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb:
        ev.event = (c->gpr[17] == -1) ? EVENT_YIELD : EVENT_SYSCALL; 
        break;
      case 0x80000007:
        ev.event = EVENT_IRQ_TIMER; 
        break;
      default:
        ev.event = EVENT_ERROR; 
        break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

void __am_panic_on_return() {
  panic("kernel context return");
}

extern void __am_asm_trap(void);
extern void __am_kcontext_start(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}
// 创建内核线程的上下文
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context *)((uint8_t *)kstack.end - sizeof(Context));

  c->mepc = (uintptr_t)__am_kcontext_start;
  c->mstatus = 0x1800;
  c->gpr[2] = (uintptr_t)kstack.end - CONTEXT_SIZE;
  c->GPR2 = (uintptr_t)arg;   // a0
  c->GPR3 = (uintptr_t)entry; // a1
  c->GPR4 = (uintptr_t)entry; // a2

  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  // return (cpu.mstatus & MSTATUS_MIE) != 0;
  return false;
}

void iset(bool enable) {
  // if (enable) {
  //   cpu.mstatus |= MSTATUS_MIE;
  // }
  // else {
  //   cpu.mstatus &= ~MSTATUS_MIE;
  // }
}
