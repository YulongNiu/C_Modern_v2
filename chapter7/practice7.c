#include <stdio.h>

int main(void)
{
  int hour, minute;
  char halfDay;

  printf("Enter the time: ");

  scanf("%d:%d %c", &hour, &minute, &halfDay);

  switch (halfDay) {
  case 'P': case 'p': halfDay = 'P'; break;
  case 'A': case 'a': halfDay = 'A'; break;
  }

  printf("Time is %d:%.2d %cM \n", hour, minute, halfDay);
  return 0;
}
