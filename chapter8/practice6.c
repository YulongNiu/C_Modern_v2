#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char eachInput;

  while((eachInput = getchar()) != '\n') {
    switch (eachInput) {
    case 'A': case 'a': putchar('4'); break;
    case 'B':case 'b': putchar('8'); break;
    case 'E': case 'e': putchar('3'); break;
    case 'I': case 'i': putchar('1'); break;
    case 'O': case 'o': putchar('0'); break;
    case 'S': case 's': putchar('5'); break;
    default: putchar(toupper(eachInput)); break;
    }
  }

  printf("!!! \n");

  return 0;
}
