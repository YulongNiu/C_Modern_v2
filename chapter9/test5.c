#include <stdio.h>

int num_digits(int num);
int num_digits2(int num, int size);

int main(void)
{
  int inputNum;

  printf("Input number: ");
  scanf("%d", &inputNum);

  printf("Size is %d \n", num_digits(inputNum));
  printf("Size is %d \n", num_digits2(inputNum, 1));

  return 0;
}

int num_digits(int num) {

  int size = 1;

  for ( ; ;) {
    if (num < 10) {
      return size;
    }
    else {
      num = num / 10;
      size++;
    }
  }
}

int num_digits2(int num, int size) {

  return num < 10 ? size : num_digits2(num / 10, size + 1);

}
