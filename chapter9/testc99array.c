#include <stdio.h>

int twoArray(int col, int row, int a[col][row]);

int oneArray(int a[], int len);

int constOneArray(const int a[], int len);

int main(void)
{
  int a[2][2] = {{1, 1}, {2, 2}};

  printf("Sum is %d.\n", twoArray(2, 2, a));

  printf("Sum is %d. \n", oneArray((int []){1, 2, 3, 4, 5}, 5));

  int i = 1, j = 2, k = 3;
  printf("Sum is %d. \n", oneArray((int [5]){i, j, k}, 5));

  printf("Sum is %d. \n", oneArray((int [5]){1, 3, 5, 7}, 3));

  printf("Sum is %d. \n",
         constOneArray((const int [5]){1, 1, 1, 1}, 3));

  return 0;
}

int twoArray(int row, int col, int a[row][col]) {

  int sum = 0;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}


int oneArray(int a[], int len) {

  int sum = 0;

  for (int i = 0; i < len; i ++) {
    sum += a[i];
  }

  return sum;
}


int constOneArray(const int a[], int len) {

  int sum = 0;

  for (int i = 0; i < len; i ++) {
    sum += a[i];
  }

  return sum;
}
