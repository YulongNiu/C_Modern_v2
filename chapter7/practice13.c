#include <stdio.h>

int main(void)
{
  int charNum = 0, letterNum = 1;
  float averWord;
  char midLetter;

  while((midLetter = getchar()) != '\n') {
    if (midLetter != ' ') {
      ++charNum;
    }
    else {
      ++letterNum;
    }
  }

  if (charNum == 0) {
    averWord = 0.0f;
    letterNum = 0;
  }
  else {
    averWord = (float) charNum / letterNum;
  }

  printf("characters number is %d, letter number is %d \n", charNum, letterNum);
  printf("Average word length: %.1f \n", averWord);

  return 0;
}
