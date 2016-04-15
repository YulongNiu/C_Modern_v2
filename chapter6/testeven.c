#include <stdio.h>

int main(void)
{
  int i, sum;

  for (i = 0, sum = 0; i < 10; i++) {
    if (i % 2) {
      continue;
    }
    sum += i;
  }

  printf("%d\n", sum);

  return 0;
}

