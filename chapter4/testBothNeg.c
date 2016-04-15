#include <stdio.h>

int main(void)
{
  int test1, test2;

  test1 = -5 / -3;
  test2 = -5 % -3;

  printf("|%d|%d|\n", test1, test2);
  return 0;
}
