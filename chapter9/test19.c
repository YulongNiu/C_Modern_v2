#include <stdio.h>

void pb(int n);

int main(void)
{
  int inputNum;

  printf("n is ");
  scanf("%d", &inputNum);

  pb(inputNum);

  return 0;
}


void pb(int n) {
  if  (n != 0) {
    pb(n / 2);
    putchar('O' + n % 2);
  }
}
