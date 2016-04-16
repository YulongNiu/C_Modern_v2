#include <stdio.h>

#define WORDNUM 100
#define MAXWORDLEN 20

void RevPrint(int *charAarry, int (*word)[2], int (*last)[2]);

int main(void)
{
  int word[WORDNUM][2];
  int (*wordIdx)[2] = word;
  int inputChar[WORDNUM * MAXWORDLEN];
  int *inputIdx = inputChar;
  char eachChar, endChar;

  (*wordIdx)[0] = 0;

  for (; ; ++inputIdx) {

    eachChar = getchar();

    if (eachChar == '.' ||
        eachChar == '?' ||
        eachChar == '!') {
      endChar = eachChar;
      (*wordIdx)[1] = inputIdx - inputChar - 1;
      break;
    } else {
      *inputIdx = eachChar;
    }

    if (eachChar == ' ') {
      (*wordIdx++)[1] = inputIdx - inputChar - 1;
      (*wordIdx)[0] = inputIdx - inputChar + 1;
    } else {}
  }

  RevPrint(inputChar, word, wordIdx);
  printf("%c\n", endChar);

  return 0;
}


void RevPrint(int *charAarry, int (*word)[2], int (*last)[2]) {

  int (*wordIdx)[2];
  int *charIdx;

  for (wordIdx = last; wordIdx >= word; --wordIdx) {
    for (charIdx = charAarry + (*wordIdx)[0];
         charIdx <= charAarry + (*wordIdx)[1];
         ++charIdx) {
      putchar(*charIdx);
    }

    if (wordIdx != word) {
      putchar(' ');
    } else {}
  }

}
