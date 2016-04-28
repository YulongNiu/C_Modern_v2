#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 100
#define MAXNUMLEN 100

int numStack[MAXSIZE];
int *top = numStack;

int evaluate_RPN_expression(const char *expression);
void Push(int a);
int *Pop();

int main(void)
{
  char test[MAXSIZE];

  printf("Enter an PRN expression: ");

  gets(test);

  printf("Value of Expression: %d \n", evaluate_RPN_expression(test));

  return 0;
}

int evaluate_RPN_expression(const char *expression) {
  char numStr[MAXNUMLEN];
  int i = 0, strIdx = 0;

  while (expression[i]) {

    if (isdigit(expression[i])) {
      numStr[strIdx++] = expression[i];
    }
    else if (expression[i] == ' ' &&
             isdigit(expression[i - 1])) {
      numStr[strIdx] = '\0';
      Push(atoi(numStr));
      strIdx = 0;
    }
    else if (expression[i] == '+') {
      int second = *Pop();
      int first = *Pop();
      Push(first + second);
    }
    else if (expression[i] == '-') {
      int second = *Pop();
      int first = *Pop();
      Push(first - second);
    }
    else if (expression[i] == '*') {
      int second = *Pop();
      int first = *Pop();
      Push(first * second);
    }
    else if (expression[i] == '/') {
      int second = *Pop();
      int first = *Pop();
      Push(first / second);
    }
    else {}

    ++i;
  }

  return *Pop();

}

void Push(int a) {
  if (top != numStack + MAXSIZE - 1) {
    *top++ = a;
  } else {
    printf("stack overflowed. \n");
  }
}

int *Pop() {
  if (top >= numStack) {
    return --top;
  }
  else {
    printf("stack underflowed. \n");
    return NULL;
  }
}
