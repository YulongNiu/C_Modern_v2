#include <stdio.h>

int main(void)
{
  int size;
  int rowPosInit, rowPos, colPosInit, colPos;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99\n");
  printf("Enter size of magic squre: ");
  scanf("%d", &size);
  int square[size][size];

  /* initial square */
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++) {
      square[i][j] = 0;
    }
  }

  /* position for 1 */
  colPosInit = size / 2;
  rowPosInit = 0;
  square[rowPosInit][colPosInit] = 1;

  for (int i = 2; i <= size * size; i++) {
    rowPos = rowPosInit - 1;
    colPos = colPosInit + 1;

    if (rowPos < 0) {
      /* move to last row */
      rowPos = size - 1;
    }
    else {}

    if (colPos > size - 1) {
      /* move to first column */
      colPos = 0;
    }
    else {}

    if (square[rowPos][colPos] != 0) {
      rowPos = rowPosInit + 1;
      if (rowPos > size - 1) {
        rowPos = 0;
      } else {}
      colPos = colPosInit;
    }
    else {}

    square[rowPos][colPos] = i;
    rowPosInit = rowPos;
    colPosInit = colPos;
  }

  /* printf square */
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++) {
      printf("%5d", square[i][j]);
      if (j == size - 1) {
        putchar('\n');
      }
      else {}
    }
  }

  /* print each row sum */
  for (int i = 0; i < size; i++) {
    int eachSum = 0;
    for (int j = 0; j < size; j++) {
      eachSum += square[i][j];
    }
    printf("The %d row sum is %d \n", i, eachSum);
  }

  /* print each column sum */
  for (int j = 0; j < size; j++) {
    int eachSum = 0;
    for (int i = 0; i < size; i++) {
      eachSum += square[i][j];
    }
    printf("The %d column sum is %d \n", j, eachSum);
  }

  /* print left diag */
  int rdiag = 0;
  for (int i = 0, j = 0; i < size; i++, j++) {
    rdiag += square[i][j];
  }
  printf("Right diag sum is %d \n", rdiag);

  /* print right diag */
  int ldiag = 0;
  for (int i = size - 1, j = 0; j < size; i--, j++) {
    ldiag += square[i][j];
  }
  printf("Left diag sum is %d \n", ldiag);

  return 0;
}



