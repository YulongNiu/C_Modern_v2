#include <stdio.h>

int main(void)
{
  struct {
    int x, y;
  } x;

  struct {
    int x, y;
  } y;

  x.x = 1;
  y.y = 1;

  printf("x.x is %d, y.y is %d \n", x.x, y.y);

  return 0;
}
