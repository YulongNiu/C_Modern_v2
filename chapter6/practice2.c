#include <stdio.h>

int main(void)
{
  int n, m, left;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  for ( ; ;) {
    if (n == 0) {
      printf("Greatest common divisor: %d \n", m);
      break;
    }
    else {
      left = m % n;
      m = n;
      n = left;
    }
  }

  return 0;
}
