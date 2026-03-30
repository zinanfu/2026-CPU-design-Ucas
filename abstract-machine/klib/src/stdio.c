#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>


#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int itoa(int val, char* buf) {
  char temp[64];
  int i = 0;
  int j = 0;
  bool negative_sign = false;

  if (val == 0) {
    buf[0] = '0';
    return 1;
  }

  if (val < 0) {
    negative_sign = true;
    val = -val;
  }

  while (val > 0) {
    temp[i++] = '0' + (val % 10);
    val /= 10;
  }

  if (negative_sign) {
    buf[j++] = '-';
  }

  for (int k = i - 1; k >= 0; k--) {
    buf[j++] = temp[k];
  }

  return j;
}




int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  // panic("Not implemented");
  char* p = out;
  va_list ap;
  va_start(ap, fmt);

  for (const char* f = fmt; *f != '\0'; f++) {
    if (*f != '%') {
      *p++ = *f;
      continue;
    }
    else {
      f++;
      if (*f == 's') {
        char* s = va_arg(ap, char*);
        while (*s != '\0') {
          *p++ = *s++;
        }
      } else if (*f == 'd') {
        int val = va_arg(ap, int);
        p += itoa(val, p);
      }
    }
  }

  va_end(ap);
  *p = '\0';

  return p - out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
