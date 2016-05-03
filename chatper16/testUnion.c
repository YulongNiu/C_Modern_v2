#include <stdio.h>

int main(void)
{
  union test {
    int a;
    struct test1 {
      int b1;
      char b2[10];
    } b;
    struct test2 {
      int c1;
      int c2;
    } c;
  } t1;

  t1.b.b1 = 10;
  printf("%d \n", t1.c.c1);

  return 0;
}
