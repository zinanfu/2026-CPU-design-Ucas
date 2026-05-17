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

static int utoa_base(unsigned long val, char *buf, int base, bool upper) {
  char temp[64];
  int i = 0;
  int j = 0;
  const char *digits = upper ? "0123456789ABCDEF" : "0123456789abcdef";

  if (val == 0) {
    buf[0] = '0';
    buf[1] = '\0';
    return 1;
  }

  while (val > 0) {
    temp[i++] = digits[val % base];
    val /= base;
  }

  for (int k = i - 1; k >= 0; k--) {
    buf[j++] = temp[k];
  }

  buf[j] = '\0';
  return j;
}

static void putch_repeat(char ch, int count, int *num) {
  for (int i = 0; i < count; i++) {
    putch(ch);
    (*num)++;
  }
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
      char pad = ' ';
      int width = 0;
      if (*f == '0') {
        pad = '0';
        f++;
      }
      while (*f >= '0' && *f <= '9') {
        width = width * 10 + (*f - '0');
        f++;
      }

      if (*f == 's') {
        char* s = va_arg(ap, char*);
        while (*s != '\0') {
          putch(*s++);
          num++;
        }
      } else if (*f == 'd') {
        char buf[64];
        int val = va_arg(ap, int);
        int length = itoa(val, buf);
        int pad_len = width > length ? width - length : 0;
        putch_repeat(pad, pad_len, &num);
        for (int i = 0; i < length; i++) {
          putch(buf[i]);
          num++;
        }
      } else if (*f == 'x' || *f == 'X') {
        char buf[64];
        unsigned int val = va_arg(ap, unsigned int);
        int length = utoa_base(val, buf, 16, *f == 'X');
        int pad_len = width > length ? width - length : 0;
        putch_repeat(pad, pad_len, &num);
        for (int i = 0; i < length; i++) {
          putch(buf[i]);
          num++;
        }
      } else if (*f == 'p') {
        char buf[64];
        uintptr_t val = (uintptr_t)va_arg(ap, void *);
        int length = utoa_base(val, buf, 16, false);
        putch('0'); num++;
        putch('x'); num++;
        int pad_len = (int)(sizeof(uintptr_t) * 2) - length;
        if (pad_len > 0) {
          putch_repeat('0', pad_len, &num);
        }
        for (int i = 0; i < length; i++) {
          putch(buf[i]);
          num++;
        }
      } else if (*f == 'c') {
        char ch = (char)va_arg(ap, int);
        putch(ch);
        num++;
      } else if (*f == '%') {
        putch('%');
        num++;
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
