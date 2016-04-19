#include <stdio.h>

#define N 5

void PrintVal(int *a);
void PrintArray(int *a, int length);
void PrintString(char *a, int length);
void Print2Array(int colnum, int rownum, int (*a)[colnum]);
void Print2Array2(int colnum, int rownum, int **a);
void PrintStringArray(char *a[], int length);
void PrintStringArray2(char **a, int length);

int main(void)
{
  int testVal = 2;
  PrintVal(&testVal);
  printf("\n");

  int testArray[N] = {2, 3, 5};
  PrintArray(testArray, N);
  printf("\n");

  char testString[N] = "hell";
  PrintString(testString, N);
  printf("\n");

  int test2Array[N][N] = {{1, 2, 3, 4, 5}};
  Print2Array(N, N, test2Array);
  int *test2Array2[N] = {test2Array[0], test2Array[1], test2Array[2], test2Array[3], test2Array[4]};
  Print2Array2(N, N, test2Array2);

  char *testStringArray[N] = {"Hello,", "it", "is", "me"};
  PrintStringArray(testStringArray, 4);
  PrintStringArray2(testStringArray, 4);

  return 0;
}

void PrintVal(int *a) {
  printf("%3d", *a);
}

void PrintArray(int *a, int length) {
  int *p;
  for (p = a; p < a + length; ++p) {
    printf("%3d", *p);
  }
}

void PrintString(char *a, int length) {
  char *p;
  for (p = a; p < a + length; ++p) {
    printf("%c", *p);
  }
}


void Print2Array(int colnum, int rownum, int (*a)[rownum]) {
  int (*p)[colnum];
  for (p = a; p < a + colnum; ++p) {
    for (int *q = *p; q < *p + rownum; ++q) {
      printf("%3d", *q);
    }
    printf("\n");
  }
}

void Print2Array2(int colnum, int rownum, int **a) {
  int **p;
  for (p = a; p < a + colnum; ++p) {
    for (int *q = *p; q < *p + rownum; ++q) {
      printf("%3d", *q);
    }
    printf("\n");
  }
}

void PrintStringArray(char *a[], int length) {
  char **p;
  for (p = a; p < a + length; ++p) {
    printf("%s\n", *p);
  }
}

void PrintStringArray2(char **a, int length) {
  char **p;
  for (p = a; p < a + length; ++p) {
    printf("%s\n", *p);
  }
}
