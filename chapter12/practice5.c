#include <stdio.h>

#define LEN 5

void max_min(int *a, int *last, int *max, int *min);

int main(void)
{
  int inputA[LEN];
  int *p;

  for (p = inputA; p < inputA + LEN; ++p) {
    scanf("%d", p);
  }

  int max, min;
  max = min = *inputA;

  max_min(inputA, p - 1, &max, &min);

  printf("Maximum is %d \n", max);
  printf("Minimum is %d \n", min);

  return 0;
}

void max_min(int *a, int *last, int *max, int *min) {

  for (;a <= last; ++a) {
    if (*a > *max) {
      *max = *a;
    }
    else if (*a < *min) {
      *min = *a;
    }
    else {}
  }
}
