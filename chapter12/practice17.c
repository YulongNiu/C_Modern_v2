#include <stdio.h>

#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n);

void PrintArray(int nrow, int ncol, const int a[nrow][ncol]);

int main(void) {
  const int testArray[3][LEN] = {{1, 1, 1},
                                 {2, 2, 2},
                                 {3, 3, 3}};

  PrintArray(3, LEN, testArray);

  printf("%d\n", sum_two_dimensional_array(testArray, 3));

  return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n) {

  int sum = 0;

  for (int const *p = a[0]; p < a[0] + n * LEN; ++p) {
    sum += *p;
  }

  return sum;
}

void PrintArray(int nrow, int ncol, int const a[nrow][ncol]) {

  for (int i = 0; i < nrow; ++i) {
    for (int const *p = a[i]; p < a[i] + ncol; ++p) {
      printf("%3d", *p);
    }
    printf("\n");
  }

}
