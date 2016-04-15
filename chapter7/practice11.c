#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char nameLetter;
  char familyLetter;
  char midLetter;

  /* read in first name letter */
  do {
    nameLetter = getchar();
  } while (nameLetter == ' ');

  /* skip rest letters in the name */
  do {
    midLetter = getchar();
  } while (midLetter != ' ');

  while((familyLetter = getchar()) != '\n') {

    if (familyLetter != ' ') {
      putchar(familyLetter);
    } else {}
  }

  printf(", %c. \n", toupper(nameLetter));

  return 0;
}
