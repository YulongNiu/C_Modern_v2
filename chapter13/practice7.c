#include <stdio.h>

int main(void)
{
  const char *lessTen[] = {"ten", "eleven", "twelve", "thirteen",
                           "fourteen", "fifteen", "sixteen", "seventeen",
                           "eighteen", "nineteen"};

  const char *decimal[] = {"twenty", "thirty", "forty", "fifty",
                           "sixty", "seventy", "eighty", "ninety"};

  const char *base[] = {"one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};

  int inputNum;
  printf("Enter a two-digit number: ");
  scanf("%d", &inputNum);

  int inputDec, inputBase;
  inputDec = inputNum / 10;
  inputBase = inputNum % 10;

  if (inputNum >= 10 && inputNum <= 19) {
    printf("You entered the number %s \n", lessTen[inputBase]);
  } else {
    printf("You entered the number %s-%s \n", decimal[inputDec - 2], base[inputBase - 1]);
  }

  return 0;
}

