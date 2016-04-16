#include <stdio.h>

#define READLEN 50

void RevPrint(int *a, int *last);

int main(void)
{
  int a[READLEN];
  int *p;

  for (p = a; p < a + READLEN && (*p = getchar()) != '\n'; ++p)
    ;
  RevPrint(a, p);

  return 0;
}


void RevPrint(int *a, int *last) {

  int *p;

  for (p = last; p >= a ; --p) {
    putchar(*p);
  }

  printf("\n");

}

