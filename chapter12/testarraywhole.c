#include <stdio.h>

#define LEN 4

int main(void)
{
  int testA[LEN] = {1, 2};
  int *p;
  int *addA = testA;
  *addA = 0;

  for (p = addA; p < addA + LEN; ++p) {
    printf("%3d", *p);
  }

  printf("\n");

  return 0;
}
