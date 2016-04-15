#include <stdio.h>

int main(void)
{
  char eachChar;

  printf("It is a test: \n");
  while((eachChar = getchar()) != '\n') {
    putchar(eachChar);
  }

  return 0;
}
