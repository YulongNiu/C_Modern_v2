#include <stdio.h>

#define MAXLEN 1000

int main(void) {

  char inputStrMat[MAXLEN];
  char eachChar, endChar;
  int i = 0;
  int eachEndIdx, eachWordIdx;

  for( ; ;) {
    eachChar = getchar();
    inputStrMat[i] = eachChar;
    i++;

    if (eachChar == '.' ||
        eachChar == '?' ||
        eachChar == '!') {
      endChar = eachChar;
      break;
    } else {}
  }

  eachEndIdx = i - 2;
  for (int revIdx = i - 2; revIdx > 0; revIdx--) {
    if (inputStrMat[revIdx] == ' ') {
      for (eachWordIdx = revIdx + 1;
           eachWordIdx <= eachEndIdx;
           eachWordIdx++) {
        putchar(inputStrMat[eachWordIdx]);
      }
      putchar(' ');
      eachEndIdx = revIdx - 1;
    }
    else {}
  }

  /* print first word */
  for (int firstIdx = 0; firstIdx <= eachEndIdx; firstIdx++) {
    putchar(inputStrMat[firstIdx]);
  }

  printf("%c\n", endChar);

  return 0;
}
