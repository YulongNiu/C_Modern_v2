#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for (int i = 0; i < 10; i++) {
    printf("%d \n", rand() % 20);
  }

  return 0;
}
