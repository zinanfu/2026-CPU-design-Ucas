#include <am.h>
#include "../riscv.h"

#ifndef RTC_ADDR
#define RTC_ADDR 0x10000010
#endif

static void us_to_calendar(uint64_t us, AM_TIMER_RTC_T *rtc) {
  uint64_t sec = us / 1000000ULL;
  uint64_t days = sec / 86400ULL;
  uint32_t rem = (uint32_t)(sec % 86400ULL);

  rtc->hour = rem / 3600U;
  rem %= 3600U;
  rtc->minute = rem / 60U;
  rtc->second = rem % 60U;

  int64_t z = (int64_t)days + 719468;
  int64_t era = (z >= 0 ? z : z - 146096) / 146097;
  uint32_t doe = (uint32_t)(z - era * 146097);                                  // [0, 146096]
  uint32_t yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;         // [0, 399]
  int64_t y = (int64_t)yoe + era * 400;
  uint32_t doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
  uint32_t mp = (5 * doy + 2) / 153;                                            // [0, 11]
  uint32_t d = doy - (153 * mp + 2) / 5 + 1;
  uint32_t m = mp < 10 ? mp + 3 : mp - 9;

  rtc->year = (int)(y + (m <= 2));
  rtc->month = (int)m;
  rtc->day = (int)d;
}

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  uptime->us = ((uint64_t)hi << 32) | lo;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  uint64_t us = ((uint64_t)hi << 32) | lo;
  us_to_calendar(us, rtc);
}
