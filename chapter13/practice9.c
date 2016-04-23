#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int compute_vowel_count(const char *sentence);

int main(void)
{
  char inputStr[MAXLEN];

  printf("Enter a sentence: ");
  gets(inputStr);
  printf("Your sentence contains %d vowels", compute_vowel_count(inputStr));
  return 0;
}

int compute_vowel_count(const char *sentence) {
  int oNum = 0;

  while(*sentence) {
    char lowC = tolower(*sentence);
    if (lowC == 'a' ||
        lowC == 'e' ||
        lowC == 'i' ||
        lowC == 'o' ||
        lowC == 'u') {
      ++oNum;
    }
    ++sentence;
  }

  return oNum;
}
