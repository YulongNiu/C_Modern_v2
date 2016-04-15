#include <stdio.h>

#define COL 3

int twoArray(int [][COL], int);

int main(void)
{
  int a[3][COL];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < COL; j++) {
      a[i][j] = i+j;
    }
  }

  printf("Sum is %d \n", twoArray(a, 3));

  return 0;
}

int twoArray(int a[][COL], int row) {

  int sum = 0;

  for(int i = 0; i < row; i++) {
    for (int j = 0; j < COL; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}
