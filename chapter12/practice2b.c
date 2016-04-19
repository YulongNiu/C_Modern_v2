#include <stdio.h>
#include <ctype.h>

#define INPUTLEN 100

void IsPalindrome(int *a, int *last);

int main(void)
{
  int a[INPUTLEN];
  int *index = a;
  int eachInput;

  do {
    eachInput = getchar();

    if (isalpha(eachInput)) {
      *index++ = tolower(eachInput);
    } else {}

    } while (index < a + INPUTLEN && eachInput != '\n');

  IsPalindrome(a, index - 1);

  for (int *start = a; start < index; ++start) {
    putchar(*start);
  }
  printf("\n");

  return 0;
}


void IsPalindrome(int *a, int *last) {

  for (; a < last; ++a, --last) {
    if (*a != *last) {
      printf("Not a palindrome\n");
      return;
    } else {}
  }

  printf("Palindrome\n");

}
