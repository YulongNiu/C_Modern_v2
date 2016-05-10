#include <stdio.h>

#define FNUM 8

struct time24 {
  int h;
  int m;
  char *aorp;
};

struct time24 To24(int minutes);

int main(void)
{
  struct eachDA {
    int departure;
    int arriving;
  };

  const struct eachDA timeTable[] = {
    {480, 616}, {583, 712},
    {679, 811}, {767, 900},
    {840, 968}, {945, 1079},
    {1140, 1280}, {1305, 1438}
  };

  int h, m;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);

  int inputM = h * 60 + m;

  int i = 0;
  for (; i < FNUM && inputM >= timeTable[i].departure; ++i)
    ;

  if (i == FNUM) {
    printf("sorry, no flight left \n");
  } else {
    struct time24 d, a;
    d = To24(timeTable[i].departure);
    a = To24(timeTable[i].arriving);

    printf("Closet departure time is %d:%.2d %s,"
           " arriving at %d:%.2d %s \n",
           d.h, d.m, d.aorp,
           a.h, a.m, a.aorp);
  }

  return 0;
}


struct time24 To24(int minutes) {

  struct time24 t;

  int h = minutes / 60;
  t.m = minutes % 60;

  if (h >= 12 && h < 13) {
    t.h = h;
    t.aorp = "pm";
  }
  else if (h >= 13) {
    t.h = h - 12;
    t.aorp = "pm";
  }
  else {
    t.h = h;
    t.aorp = "am";
  }

  return t;
}
