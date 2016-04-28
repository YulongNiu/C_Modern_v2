#include <stdio.h>

int main(void)
{
  int month, day, year;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  const char *monthName[] = {"January", "February", "March",
                             "April", "May", "June",
                             "July", "August", "September",
                             "October", "November", "December"};

  printf("You entered the date %s %d, %d \n",
         monthName[month - 1],
         day,
         year);

  return 0;
}
