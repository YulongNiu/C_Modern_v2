#include <stdio.h>

int main(void)
{
  int day, month, year;

  printf("Enter a date (mm/dd/yyyy): ");

  scanf("%d/%d/%d", &day, &month, &year);

  printf("You enter the date %d%d%d\n", year, month, day);

  return 0;
}
