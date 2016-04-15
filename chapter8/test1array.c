#include <stdio.h>

#define LEN 5

int main(void)
{
  int testLen = 5;
  int a[testLen * 10];
  int b[LEN] = {0};

  a[0] = 1;
  printf("%d\n", a[0]);

  for (int i = 0; i < LEN; i++) {
    printf("%d element in b is %d \n", i + 1, b[i]);
  }

  return 0;
}

