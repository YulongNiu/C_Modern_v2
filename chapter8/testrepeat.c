#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int repeatNum = 0, eachNum;
  char eachInput;
  bool testArray[10] = {false};

  while((eachInput = getchar()) != '\n') {

    eachNum = (int) eachInput - '0';

    if (testArray[eachNum]) {
      ++repeatNum;
      printf("%d repeated \n", eachNum);
    }
    else {
      testArray[eachNum] = true;
    }
  }

  if (repeatNum == 0) {
    printf("No repeated digit. \n");
  }
  else {
    printf("Repeated digit with %d. \n", repeatNum);
  }

  return 0;
}

