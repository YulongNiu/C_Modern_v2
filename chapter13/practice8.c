#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int compute_scrabble_value(const char *word);

int main(void)
{
  char enterWord[MAXLEN];
  printf("Enter a word: ");
  gets(enterWord);
  printf("Scrabble value: %d \n", compute_scrabble_value(enterWord));

  return 0;
}



int compute_scrabble_value(const char *word) {
  const int dictVal[] = {1, 3, 3, 2, 1,
                         4, 2, 4, 1, 8,
                         5, 1, 3, 1, 1,
                         3, 10, 1, 1, 1,
                         1, 4, 4, 8, 4,
                         10};

  int wordVal = 0;
  while(*word) {
    char eachWord = toupper(*word);
    wordVal += dictVal[eachWord - 'A'];
    word++;
  }

  return wordVal;
}
