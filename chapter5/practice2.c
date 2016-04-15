#include <stdio.h>

int main(void)
{
  int hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  if (hour - 12 <= 0) {
    printf("Equivalent 12-hour time: %.2d:%.2d AM \n", hour, minute);
  }
  else {
    printf("Equivalent 12-hour time: %.2d:%.2d PM \n", hour - 12, minute);
  }

  return 0;
}
