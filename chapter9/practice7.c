#include <stdio.h>

int power(int n, int p);

int main(void)
{
  int baseNum, powerNum;

  printf("Please input the base number: ");
  scanf("%d", &baseNum);
  printf("Please input the power: ");
  scanf("%d", &powerNum);

  if (powerNum % 2 == 0) {
    printf("%d \n", power(baseNum, powerNum));
  }
  else {
    printf("%d \n", power(baseNum, powerNum - 1) * baseNum);
  }
  return 0;
}


int
power(int n, int p) {

  if (p == 2) {
    return n * n;
  }
  else {
    return power(n, p - 2) * n * n;
  }
}
