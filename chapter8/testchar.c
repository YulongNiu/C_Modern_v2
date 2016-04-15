#include <stdio.h>

int main(void)
{
  char eachInput;

  while((eachInput = getchar()) != '\n') {
    printf("%d \n", eachInput - '0');
  }

  return 0;
}
