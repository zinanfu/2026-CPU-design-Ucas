#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // panic("Not implemented");
  size_t len = 0;
  while (s[len] != '\0') {
    len++;
  }

  return len;

}

char *strcpy(char *dst, const char *src) {
  char* ori = dst;
  while ((*dst++ = *src++) != '\0');

  return ori;
}

char *strncpy(char *dst, const char *src, size_t n) {
  // 不保证 '\0' 结尾
  char* ori = dst;
  while (n > 0 && *src != '\0') {
    *dst++ = *src++;
    n--;
  }
  while (n > 0) {
    *dst++ = '\0';
    n--;
  }

  return ori;
}

char *strcat(char *dst, const char *src) {
  char* ori = dst;
  
  while (*dst != '\0') {
    dst++;
  }
  while ((*dst++ = *src++) != '\0');

  return ori;

}

int strcmp(const char *s1, const char *s2) {
  
  while (*s1 && *s1 == *s2) {
    s1++;
    s2++;
  }
  
  return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while (*s1 && *s1 == *s2 && n > 1) {
    s1++;
    s2++;
    n--;
  }
  
  if (n == 0) {
    return 0;
  }

  return (unsigned char)*s1 - (unsigned char)*s2;
}

void *memset(void *s, int c, size_t n) {
  unsigned char* ori = s;
  while (n > 0) {
    *ori++ = (unsigned char)c;
    n--;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char* d = dst;
  const unsigned char* s = src;

  if (s > d) {
    for (size_t i = 0; i < n; i++) {
      d[i] = s[i];
    }
  } else {
    for (size_t i = 1; i <= n; i++) {
      d[n - i] = s[n - i];
    }
  }

  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char* d = out;
  const unsigned char* s = in;

  for (size_t i = 0; i < n; i++) {
    d[i] = s[i];
  }

  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char* d = s1;
  const unsigned char* s = s2;

  for (size_t i = 0; i < n; i++) {
    if (d[i] != s[i]) {
      return d[i] - s[i];
    }

  }
  return 0;
}

#endif
