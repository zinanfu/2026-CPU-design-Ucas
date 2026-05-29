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

typedef struct {
  bool to_console;
  char *buf;
  size_t limit;
  size_t pos;
} out_ctx_t;

static void out_char(out_ctx_t *ctx, char ch) {
  if (ctx->to_console) {
    putch(ch);
  }

  if (ctx->buf != NULL && ctx->pos + 1 < ctx->limit) {
    ctx->buf[ctx->pos] = ch;
  }

  ctx->pos++;
}

static void out_repeat(out_ctx_t *ctx, char ch, int count) {
  for (int i = 0; i < count; i++) {
    out_char(ctx, ch);
  }
}

static void out_finalize(out_ctx_t *ctx) {
  if (ctx->buf == NULL || ctx->limit == 0) {
    return;
  }

  size_t end = (ctx->pos < ctx->limit - 1) ? ctx->pos : (ctx->limit - 1);
  ctx->buf[end] = '\0';
}

static int vformat_output(out_ctx_t *ctx, const char *fmt, va_list ap) {
  for (const char *f = fmt; *f != '\0'; f++) {
    if (*f != '%') {
      out_char(ctx, *f);
      continue;
    }

    f++;
    if (*f == '\0') {
      break;
    }

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
      char *s = va_arg(ap, char *);
      while (*s != '\0') {
        out_char(ctx, *s++);
      }
    } else if (*f == 'd') {
      char buf[64];
      int val = va_arg(ap, int);
      int length = itoa(val, buf);
      int pad_len = width > length ? width - length : 0;
      out_repeat(ctx, pad, pad_len);
      for (int i = 0; i < length; i++) {
        out_char(ctx, buf[i]);
      }
    } else if (*f == 'x' || *f == 'X') {
      char buf[64];
      unsigned int val = va_arg(ap, unsigned int);
      int length = utoa_base(val, buf, 16, *f == 'X');
      int pad_len = width > length ? width - length : 0;
      out_repeat(ctx, pad, pad_len);
      for (int i = 0; i < length; i++) {
        out_char(ctx, buf[i]);
      }
    } else if (*f == 'p') {
      char buf[64];
      uintptr_t val = (uintptr_t)va_arg(ap, void *);
      int length = utoa_base(val, buf, 16, false);
      out_char(ctx, '0');
      out_char(ctx, 'x');
      int pad_len = (int)(sizeof(uintptr_t) * 2) - length;
      if (pad_len > 0) {
        out_repeat(ctx, '0', pad_len);
      }
      for (int i = 0; i < length; i++) {
        out_char(ctx, buf[i]);
      }
    } else if (*f == 'c') {
      char ch = (char)va_arg(ap, int);
      out_char(ctx, ch);
    } else if (*f == '%') {
      out_char(ctx, '%');
    }
  }

  out_finalize(ctx);
  return (int)ctx->pos;
}




int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  out_ctx_t ctx = {
    .to_console = true,
    .buf = NULL,
    .limit = 0,
    .pos = 0,
  };
  int num = vformat_output(&ctx, fmt, ap);
  va_end(ap);

  return num;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  out_ctx_t ctx = {
    .to_console = false,
    .buf = out,
    .limit = (size_t)-1,
    .pos = 0,
  };
  va_list ap_local;
  va_copy(ap_local, ap);
  int num = vformat_output(&ctx, fmt, ap_local);
  va_end(ap_local);
  return num;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  out_ctx_t ctx = {
    .to_console = false,
    .buf = out,
    .limit = (size_t)-1,
    .pos = 0,
  };
  int num = vformat_output(&ctx, fmt, ap);
  va_end(ap);
  return num;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  out_ctx_t ctx = {
    .to_console = false,
    .buf = out,
    .limit = n,
    .pos = 0,
  };
  int num = vformat_output(&ctx, fmt, ap);
  va_end(ap);
  return num;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  out_ctx_t ctx = {
    .to_console = false,
    .buf = out,
    .limit = n,
    .pos = 0,
  };
  va_list ap_local;
  va_copy(ap_local, ap);
  int num = vformat_output(&ctx, fmt, ap_local);
  va_end(ap_local);
  return num;
}

#endif
