#include <stdio.h>

int main(void)
{
  int i1, i2, i3;

  printf("Please input the number: ");
  scanf("%1d%1d%1d", &i1, &i2, &i3);

  printf("Reverse number is %d%d%d\n", i3, i2, i1);
  return 0;
}

