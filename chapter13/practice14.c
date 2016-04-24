#include <stdio.h>
#include <stdbool.h>

#define WORDNUM 26
#define MAXLEN 100

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char firstW[MAXLEN];
  char secondW[MAXLEN];

  printf("Enter first word: ");
  gets(firstW);
  printf("Enter second word: ");
  gets(secondW);

  bool isAnagram;
  isAnagram = are_anagrams(firstW, secondW);

  if (isAnagram) {
    printf("The words are anagrams \n");
  } else {
    printf("The words are not anagrams \n");
  }
  return 0;
}


bool are_anagrams(const char *word1, const char *word2) {
  int wordIdx[26] = {0};

  for (int i = 0; word1[i] || word2[i]; ++i) {
    ++wordIdx[word1[i] - 'a'];
    --wordIdx[word2[i] - 'a'];
  }

  int idx = 0;
  for (idx = 0; idx < WORDNUM && wordIdx[idx] == 0; ++idx)
    ;

  if (idx == WORDNUM) {
    return true;
  } else {
    return false;
  }
}
