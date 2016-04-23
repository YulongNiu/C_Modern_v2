#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 100

void reverse_name(char *name);

int main(void)
{
  char inputStr[MAXLEN];
  printf("Enter a first and last name: ");
  gets(inputStr);
  reverse_name(inputStr);

  return 0;
}


void reverse_name(char *name) {
  char fN;
  int fNStart, sNStart, sNEnd;

  int nameLen = strlen(name);

  /* search first character of first name */
  for (int i = 0; ; ++i) {
    if (isalpha(name[i])) {
      fNStart = i;
      break;
    } else {}
  }
  fN = name[fNStart];

  /* search last character of family name */
  for (int i = nameLen - 1; ; --i) {
    if (isalpha(name[i])) {
      sNEnd = i;
      break;
    } else {}
  }

  for (int i = fNStart + 1; ; ++i) {
    if (isupper(name[i])) {
      sNStart = i;
      break;
    } else {}
  }

  for (int i = sNStart; i <= sNEnd; ++i) {
    putchar(name[i]);
  }

  printf(" %c. \n", fN);

  return;
}
