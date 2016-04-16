#include <stdio.h>
#include <ctype.h>

#define INPUTLEN 100

void IsPalindrome(int *a, int *last);

int main(void)
{
  int a[INPUTLEN];
  int *index = a;
  char eachInput;

  do {
    eachInput = getchar();

    if (isalpha(eachInput)) {
      *index++ = tolower(eachInput);
    } else {}

    } while (index < a + INPUTLEN && eachInput != '\n');

  IsPalindrome(a, index - 1);

  for (int *start = a; start < index; ++start) {
    printf("%c", *start);
  }
  printf("\n");

  return 0;
}


void IsPalindrome(int *a, int *last) {

  for (int *p = a; p <= a + (last - a) / 2; ++p) {
    if (*p != *(last - (p - a))) {
      printf("Not a palindrome\n");
      return;
    } else {}
  }

  printf("Palindrome\n");

}
