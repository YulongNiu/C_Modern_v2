#include <stdio.h>

#define MAXWORDNUM 30
#define MAXWORDLEN 20

int main(void)
{
  char inputStrArray[MAXWORDNUM][MAXWORDLEN];
  char eachChar, endChar;
  int strIdx = 0, arrayIdx = 0;

  do {
    eachChar = getchar();

    if (eachChar != ' ') {
      inputStrArray[arrayIdx][strIdx] = eachChar;
      ++strIdx;
    } else {
      inputStrArray[arrayIdx][strIdx] = '\0';
      strIdx = 0;
      ++arrayIdx;
    }
      } while (eachChar != '.' &&
               eachChar != '?' &&
               eachChar != '!');

  /* last word and end character */
  endChar = eachChar;
  inputStrArray[arrayIdx][strIdx - 1] = '\0';

  for (int i = arrayIdx; i > 0; --i) {
    printf("%s ", inputStrArray[i]);
  }
  printf("%s%c \n", inputStrArray[0], eachChar);

  return 0;
}
