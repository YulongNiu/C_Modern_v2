#include <stdio.h>

int main(void)
{
  char soloChar;

  while((soloChar = getchar()) != '\n') {
    if (soloChar == 'A' || soloChar == 'B' || soloChar == 'C') {
      putchar('2');
    }
    else if (soloChar == 'D' || soloChar == 'E' || soloChar == 'F') {
      putchar('3');
    }
    else if (soloChar == 'G' || soloChar == 'H' || soloChar == 'I') {
      putchar('4');
    }
    else if (soloChar == 'J' || soloChar == 'K' || soloChar == 'L') {
      putchar('5');
    }
    else if (soloChar == 'M' || soloChar == 'N' || soloChar == 'O') {
      putchar('6');
    }
    else if (soloChar == 'P' || soloChar == 'R' || soloChar == 'S') {
      putchar('7');
    }
    else if (soloChar == 'T' || soloChar == 'U' || soloChar == 'V') {
      putchar('8');
    }
    else if (soloChar == 'W' || soloChar == 'X' || soloChar == 'Y') {
      putchar('9');
    }
    else {
      putchar(soloChar);
    }
  }

  printf("\n");

  return 0;
}
