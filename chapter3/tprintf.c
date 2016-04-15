#include <stdio.h>

int main(void)
{
  int test = 2;
  int i;
  float x, y;

  scanf("%f%d%f", &x, &i, &y);

  printf("|%f|%d|%f|\n", x, i, y);

  printf("The test is |%d|%4d|%4.3d|%-4.2d|\n", test, test, test, test);

  printf("|%12.5e|\n", 30.253);

  printf("|%-6.2g|\n", .0000009979);

  printf("|%-6.0e|\n", .0000009979);

  return 0;
}

