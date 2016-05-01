#include <stdio.h>

int main(void)
{
  struct test1 {
    int a;
    char b[10];
    int c;
  };

  struct test1 p1 = {1, "hello"};
  struct test1 p2 = {.b = "world", 3};

  puts(p2.b);
  printf("%d \n", p2.a);

  return 0;
}



