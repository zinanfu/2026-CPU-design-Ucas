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
  unsigned u;

  if (val == 0) {
    buf[0] = '0';
    buf[1] = '\0';
    return 1;
  }

  if (val < 0) {
    negative_sign = true;
    u = -(unsigned)val;
  }
  else {
    u = val;
  }

  while (u > 0) {
    temp[i++] = '0' + (u % 10);
    u /= 10;
  }

  if (negative_sign) {
    buf[j++] = '-';
  }

  for (int k = i - 1; k >= 0; k--) {
    buf[j++] = temp[k];
  }

  buf[j] = '\0';
  return j;
}




int printf(const char *fmt, ...) {
  // panic("Not implemented");
  va_list ap;
  va_start(ap, fmt);
  int num = 0;

  for (const char* f = fmt; *f != '\0'; f++) {
    if (*f != '%') {
      putch(*f);
      num++;
      continue;
    }
    else {
      f++;
      if (*f == 's') {
        char* s = va_arg(ap, char*);
        while (*s != '\0') {
          putch(*s++);
          num++;
        }
      } else if (*f == 'd') {
        char buf[64];
        int val = va_arg(ap, int);
        int lenth = itoa(val, buf);
        for (int i = 0; i < lenth; i++) {
          putch(buf[i]);
          num++;
        }
      }
    }
  }

  va_end(ap);

  return num;

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
