#include <stdio.h>

int main(void)
{
  int size;

  printf("Please input the size: ");
  scanf("%d", &size);

  int testArray[size];

  for (int i = 0; i < size; i++) {
    testArray[i] = 0;
    printf("%3d", testArray[i]);
  }

  return 0;
}
