#include <stdio.h>

int main(void)
{
  float inputNum, maxNum = 0.0;

  for( ; ;) {
    printf("Enter a number: ");
    scanf("%f", &inputNum);

    if (inputNum != 0 && inputNum >= maxNum) {
      maxNum = inputNum;
    }
    else if (inputNum <= 0) {
      printf("The largest number entered was %g \n", maxNum);
      break;
    }

  }
  return 0;
}

