#include <stdio.h>

int main(void)
{
  int enterNum;

  printf("Enter a number \n");
  scanf("%d", &enterNum);

  if (enterNum >= 1000 || enterNum <= -1000) {
    printf("The number %d has 4 or more digits. \n", enterNum);
  }
  else if (enterNum >= 100 || enterNum <= -100) {
    printf("The number %d has 3 digits. \n", enterNum);
  }
  else if (enterNum >= 10 || enterNum <= -10) {
    printf("The number %d has 2 digits. \n", enterNum);
  }
  else {
    printf("The number %d has 1 digits. \n", enterNum);
  }

  return 0;
}

