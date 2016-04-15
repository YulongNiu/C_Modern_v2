#include <stdio.h>

#define READLEN 50

void RevPrint(int *a, int len);

int main(void)
{
  int a[READLEN];
  int i = 0;

  for (i = 0; i < READLEN && (a[i] = getchar()) != '\n'; ++i)
    ;
  RevPrint(a, i);

  return 0;
}


void RevPrint(int *a, int len) {

  for (int i = len - 1; i >= 0 ; --i) {
    putchar(a[i]);
  }

  printf("\n");

}
