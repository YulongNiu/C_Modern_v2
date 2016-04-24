#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1000

void encrypt(char *message, int shift);

int main(void)
{
  char message[MAXLEN];
  int shift;
  printf("Enter message to be encrypted: ");
  gets(message);
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  encrypt(message, shift);
  return 0;
}


void encrypt(char *message, int shift) {
  while(*message) {
    if (islower(*message)) {
      putchar((*message - 'a' + shift) % 26 + 'a');
    }
    else if (isupper(*message)) {
      putchar((*message - 'A' + shift) % 26 + 'A');
    }
    else {
      putchar(*message);
    }
    ++message;
  }

  putchar('\n');
}
