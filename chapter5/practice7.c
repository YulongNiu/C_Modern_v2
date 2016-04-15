#include <stdio.h>

int main(void)
{
  int a1, a2, a3, a4;
  int maxNum1, maxNum2, minNum1, minNum2;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

  if (a1 >= a2) {
    maxNum1 = a1;
    minNum1 = a2;
  }
  else {
    maxNum1 = a2;
    minNum1 = a1;
  }

  if (a3 >= a4) {
    maxNum2 = a3;
    minNum2 = a4;
  }
  else {
    maxNum2 = a4;
    minNum2 = a3;
  }

  if (maxNum1 >= maxNum2) {
    printf("The maximum number is %d \n", maxNum1);
  }
  else {
    printf("The maximum number is %d \n", maxNum2);
  }

  if (minNum1 <= minNum2) {
    printf("The minimum number is %d \n", minNum1);
  }
  else {
    printf("The mininum number is %d \n", minNum2);
  }

  return 0;
}
