#include <stdio.h>

#define RADIX 60

struct time {
  int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
  long m = 1 + 60 * 30 + 60 * 60 * 6;

  struct time t = split_time(m);

  printf("time is %d:%d:%d \n", t.hours, t.minutes, t.seconds);
}


struct time split_time(long total_seconds) {

  struct time t;

  t.hours = total_seconds / (RADIX * RADIX);
  t.minutes = total_seconds % (RADIX * RADIX) / RADIX;
  t.seconds = total_seconds % (RADIX * RADIX) % RADIX;

  return t;
}

