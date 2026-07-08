#include <am.h>
#include "../riscv.h"

#ifndef RTC_ADDR
#define RTC_ADDR 0x10000010
#endif

#ifndef NPC_CLINT_HZ
#define NPC_CLINT_HZ 5000000ull
#endif

void __am_timer_init() {
  
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi1, hi2, lo;
  do {
    hi1 = inl(RTC_ADDR + 4);
    lo  = inl(RTC_ADDR);
    hi2 = inl(RTC_ADDR + 4);
  } while (hi1 != hi2);

  uint64_t mtime = ((uint64_t)hi1 << 32) | lo;
  uptime->us = mtime * 1000000ull / NPC_CLINT_HZ;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
