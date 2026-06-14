#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main() {
  struct timeval tv;
  gettimeofday(&tv, NULL);

  long start_sec  = tv.tv_sec;
  long start_usec = tv.tv_usec;

  int count = 0;
  while (1) {
    gettimeofday(&tv, NULL);
    long elapsed_sec  = tv.tv_sec - start_sec;
    long elapsed_usec = tv.tv_usec - start_usec;
    if (elapsed_usec < 0) {
      elapsed_sec -= 1;
      elapsed_usec += 1000000;
    }

    long total_msec = elapsed_sec * 1000 + elapsed_usec / 1000;

    if (total_msec >= 500 * (count + 1)) {
      printf("Timer test: %d-th 0.5 second passed (elapsed: %ld ms)\n",
             count + 1, total_msec);
      count++;
    }
  }

  return 0;
}
