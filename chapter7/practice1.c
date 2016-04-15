#include <stdio.h>

int main(void)
{
  int power;
  int i;

  printf("Input the max power: ");
  scanf("%d", &power);

  for (i = 1; i <= power; i++) {
    printf("Power is %d, value is %u \n", i, PowerTwo(i));
  }

  return 0;
}

int PowerTwo (int n) {

  unsigned int powerVal;

  if (n == 1) {
    powerVal = 2;
  }
  else {
    powerVal = PowerTwo(n-1) * 2;
  }

  return powerVal;
}
