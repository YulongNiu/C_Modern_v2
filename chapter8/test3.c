#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  int testArray[] = {[0] = true, [6] = true};

  for (int i = 0; i < 7; i++) {
    printf("%d \n", testArray[i]);
  }

  return 0;
}
