#include <stdio.h>

int main(void)
{
  union test1 {
    int a;
    char b[10];
    int c;
  };

  union {
    int a;
    char b[10];
  } p3;

  /* p1.c is 0 */
  union test1 p1 = {.a = 1};

  /* c99 */
  /* p1.a is 0 and p1.c is 3 */
  union test1 p2 = {.b = "world"};

  /* c99 */
  printf("%d \n", (union test1){.c = 10}.c);

  printf("p1 is %d, p2 is %s \n", p1.a, p2.b);

  return 0;
}
