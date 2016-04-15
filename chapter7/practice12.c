#include <stdio.h>

int main(void)
{
  char operator;
  float inputNum, secondNum;


  printf("Enter an expression: ");
  scanf(" %f", &inputNum);

  for ( ; ; ) {
    do {
      operator = getchar();
    } while (operator == ' ');

    /* last input  */
    if (operator != '\n') {
      scanf(" %f", &secondNum);

      switch (operator) {
      case ('+'):
        inputNum += secondNum;
        break;
      case ('-'):
        inputNum -= secondNum;
        break;
      case ('*'):
        inputNum *= secondNum;
        break;
      case('/'):
        inputNum /= secondNum;
        break;
      }
    }
    else {
      break;
    }
  }

  printf("%.1f \n", inputNum);

  return 0;
}
