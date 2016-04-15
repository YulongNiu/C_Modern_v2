#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char soloChar;
  int vowelNum = 0;

  printf("Enter a sentence: ");

  while((soloChar = getchar()) != '\n') {
    switch (toupper(soloChar)) {
    case 'A': case 'E': case 'I': case 'O': case 'U':
      vowelNum++;
      break;
    }
  }

  printf("Your sentence contains %d vowels.\n", vowelNum);

  return 0;
}
