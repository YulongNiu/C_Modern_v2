#include <stdio.h>
#include <ctype.h>

#define ALPHANUM 26

int main(void)
{
  char each1st, each2nd;
  int alphabeta[ALPHANUM] = {0};
  int each1stIdx, each2ndIdx;

  printf("Enter first word: ");
  while ((each1st = getchar()) != '\n') {
    if (isalpha(each1st)) {
      each1st = tolower(each1st);
      each1stIdx = each1st - 'a';
      alphabeta[each1stIdx] += 1;
    }
    else {}
  }

  printf("Enter second word: ");
  while ((each2nd = getchar()) != '\n') {
    if (isalpha(each2nd)) {
      each2nd = tolower(each2nd);
      each2ndIdx = each2nd - 'a';
      alphabeta[each2ndIdx] -= 1;
    }
    else {}
  }

  for (int i = 0; i < ALPHANUM; i++) {
    if (alphabeta[i] != 0) {
      printf("The words are not anagrams. \n");
      return 0;
    }
    else {}
  }

  printf("The words are anagrams. \n");
  return 0;
}

