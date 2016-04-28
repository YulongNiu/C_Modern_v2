#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAXLEN 100

bool is_palindrom(const char *message);

int main(void)
{

  char inputS[MAXLEN];

  printf("Enter a message: ");
  gets(inputS);

  if (is_palindrom(inputS)) {
    printf("Palindrome \n");
  } else {
    printf("Not a palindrom \n");
  }

  return 0;
}

bool is_palindrom(const char *message) {

  int len = strlen(message);
  const char *start = message, *end = message + len;

  while (start < end) {

    int leftC, rightC;
    leftC = isalpha(*start);
    rightC = isalpha(*end);

    if (leftC && rightC) {
      if (islower(leftC) != islower(rightC)) {
        return false;
      } else {
        ++start;
        --end;
      }
    }
    else if (leftC && !rightC) {
      --end;
    }
    else if (!leftC && rightC) {
      ++start;
    }
    else {
      --end;
      ++start;
    }

  }

  return true;

}
