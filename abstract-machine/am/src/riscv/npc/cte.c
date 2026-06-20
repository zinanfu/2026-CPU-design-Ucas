#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include <klib-macros.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11:              // Environment call from M-mode (yield)
        ev.event = EVENT_YIELD; break;
      case 0x80000007:      // Machine timer interrupt (mcause bit 31 + code 7)
        ev.event = EVENT_IRQ_TIMER; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
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

void __am_panic_on_return() {
  panic("kernel context return");
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context *)((uint8_t *)kstack.end - sizeof(Context));

  c->mepc    = (uintptr_t)__am_kcontext_start;
  c->mstatus = 0x1800;
  c->gpr[2]  = (uintptr_t)kstack.end - sizeof(Context);   // sp
  c->GPR2    = (uintptr_t)arg;          // a0
  c->GPR3    = (uintptr_t)entry;        // a1
  c->GPR4    = (uintptr_t)entry;        // a2

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
  return false;
}

void iset(bool enable) {
}
