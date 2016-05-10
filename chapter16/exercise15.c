#include <stdio.h>

typedef enum {Monday, Tuesday, Wensday, Thuesday, Friday, Satuday, Sunday} Week;

int main(void)
{
  enum week {MONDAY, TUESDAY, WENSDAY, THUESDAY, FRIDAY, SATURDAY, SUNDAY};
  enum week test1 = TUESDAY;

  Week test2 = Monday;

  printf("%d \n", test1 + 2);
  printf("%d \n", test2);
  return 0;
}
