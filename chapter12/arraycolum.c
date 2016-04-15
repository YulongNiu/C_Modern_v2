#include <stdio.h>

#define ROW_NUM 10
#define COL_NUM 15
#define COL_IDX 3

void PrintArray(int nrow, int ncol, int a[nrow][ncol]);
void InitArray(int nrow, int ncol, int a[nrow][ncol]);

int main(void)
{
  int testArray[ROW_NUM][COL_NUM];
  int (*p)[COL_NUM];

  InitArray(ROW_NUM, COL_NUM, testArray);

  for (p = testArray; p < testArray + COL_NUM; ++p) {
    (*p)[COL_IDX] = 20;
  }

  /* PrintArray(ROW_NUM, COL_NUM, testArray); */

  int *col = testArray[0];
  printf("%d\n", col[0]);

  return 0;
}


void InitArray(int nrow, int ncol, int a[nrow][ncol]) {

  int idx = 0;

  for(int i = 0; i < nrow; ++i) {
    for (int *p = a[i]; p < a[i] + ncol; ++p) {
      *p = idx;
    }
    ++idx;
  }
}

void PrintArray(int nrow, int ncol, int a[nrow][ncol]) {

  for (int i = 0; i < nrow; ++i) {
    for (int *p = a[i]; p < a[i] + ncol; ++p) {
      printf("%3d", *p);
    }
    printf("\n");
  }

}
