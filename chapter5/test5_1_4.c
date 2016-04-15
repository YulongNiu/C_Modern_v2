#include <stdio.h>

int main(void)
{
  int i, j;
  int final;

  printf("Please input i: ");
  scanf("%d", &i);
  printf("Please input j: ");
  scanf("%d", &j);
  printf("i is %d and j is %d. \n", i, j);

  if (i < j) {
    final = -1;
  }
  else if (i == j) {
    final = 0;
  }
  else {
    final = 1;
  }

  printf("The final value is %d. \n", final);

  return 0;
}
