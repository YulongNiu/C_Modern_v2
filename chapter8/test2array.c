#include <stdio.h>

int main(void)
{
  const int testArray[4][4] = {{1, 1, 1},
                         {2, 2, 2},
                         {3, 3, 3}};

  int testArray2[10][10] = {0};

  int array99[2][2] = {[0][0] = 0, [1][1] = 1};

  int size;
  printf("Please input the size: ");
  scanf("%d", &size);
  int arrayNosize99[size][size];

  for (int i = 0; i < 4; i++) {
    printf("%d \n", testArray[i][i]);
  }

  printf("%d \n", array99[0][1]);

  for (int row = 0; row < 10; row++) {
    for (int col = 0; col < 10; col++) {
      printf("%3d", testArray2[row][col]);
    }
    printf("\n");
  }

  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      printf("%3d", arrayNosize99[row][col]);
    }
    printf("\n");
  }

  return 0;
}
