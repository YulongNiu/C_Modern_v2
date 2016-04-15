#include <stdio.h>

int main(void)
{
  int sumDollar, num20, num10, num5, num1;
  int left20, left10;

  printf("Enter a dollar amount: ");
  scanf("%d", &sumDollar);

  num20 = sumDollar / 20;
  left20 = sumDollar % 20;

  num10 = left20 / 10;
  left10 = left20 % 10;

  num5 = left10 / 5;
  num1 = left10 % 5;

  printf("$20 bills: %d \n", num20);
  printf("$10 bills: %d \n", num10);
  printf(" $5 bills: %d \n", num5);
  printf(" $1 bills: %d \n", num1);

  return 0;
}

