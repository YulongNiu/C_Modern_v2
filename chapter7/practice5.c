#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char soloChar;
  int wordVal = 0;

  printf("Enter a word: ");

  while((soloChar = getchar()) != '\n') {
    soloChar = toupper(soloChar);

    if(soloChar == 'A' || soloChar == 'E' || soloChar == 'I' || soloChar == 'L' || soloChar == 'N' || soloChar == 'O' || soloChar == 'R' || soloChar == 'S' || soloChar == 'T' || soloChar == 'U') {
      wordVal += 1;
    }
    else if (soloChar == 'D' || soloChar == 'G') {
      wordVal += 2;
    }
    else if (soloChar == 'B' || soloChar == 'C' || soloChar == 'M' || soloChar == 'P') {
      wordVal += 3;
    }
    else if (soloChar == 'F' || soloChar == 'H' || soloChar == 'V' || soloChar == 'W' || soloChar == 'Y') {
      wordVal += 4;
    }
    else if (soloChar == 'K') {
      wordVal += 5;
    }
    else if (soloChar == 'J' || soloChar == 'X') {
      wordVal += 8;
    }
    else if (soloChar == 'Q' || soloChar == 'Z') {
      wordVal += 10;
    }
  }

  printf("Scrabble value: %d\n", wordVal);

  return 0;
}
