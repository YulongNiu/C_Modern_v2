#include <stdio.h>

int main(void)
{
  char p[4] = "abc";
  char *q = "def";
  p = q;
  puts(p);

  int a[4] = {0, 1, 2, 3};
  int b[4] = {1, 2, 3, 4};
  a++;
  return 0;
}
