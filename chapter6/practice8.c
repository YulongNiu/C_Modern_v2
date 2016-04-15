#include <stdio.h>
int main(void)
{
  int startDate, totalDays;
  int i;
  int startBlank;

  printf("Enter number of days in month: ");
  scanf("%d", &totalDays);
  printf("Enter starting day of the week (1=Sun, 7=at):");
  scanf("%d", &startDate);

  startBlank = startDate - 1;
  switch (startBlank) {
  case 0: break;
  case 1: printf("%3s", " "); break;
  case 2: printf("%6s", " "); break;
  case 3: printf("%9s", " "); break;
  case 4: printf("%12s", " "); break;
  case 5: printf("%15s", " "); break;
  case 6: printf("%18s", " "); break;
  };

  for (i = 1; i <= totalDays; i++) {
    printf("%3d", i);
    if ((i + startDate - 1) % 7 == 0 || i == totalDays) {
      printf("\n");
    }
    else {}
  }

  return 0;
}

