#include <stdio.h>
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
  int sNStart, upperIdx = 0;

  for (int i = 0; ; ++i) {
    if (isupper(name[i])) {
      ++upperIdx;
      if (upperIdx == 1) {
        /* first character of first name */
        fN = name[i];
      }
      else if (upperIdx == 2) {
        sNStart = i;
        break;
      }
      else {}
    } else {}
  }

  char *p = name + sNStart;
  while (*p != ' ') {
    putchar(*p);
    ++p;
  }

  printf(" %c. \n", fN);

  return;
}
