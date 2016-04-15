#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
  int num1, num2;
  printf("Please input two number: ");
  scanf("%d %d", &num1, &num2);

  printf("gcd is %d.\n", gcd(num1, num2));
  return 0;
}

int gcd(int m, int n) {

  if (n == 0) {
    return m;
  }
  else {
    return gcd(n, m % n);
  }
}
