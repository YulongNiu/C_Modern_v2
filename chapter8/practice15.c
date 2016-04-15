#include <stdio.h>

int main(void)
{
  int shift;
  char eachInput, encryInput;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Enter message to be encrypted: \n");
  while((eachInput = getchar()) != EOF) {
    if ('A' <= eachInput && eachInput <= 'Z') {
      encryInput = ((eachInput - 'A') + shift) % 26 + 'A';
      putchar(encryInput);
    }
    else if ('a' <= eachInput && eachInput <= 'z') {
      encryInput = ((eachInput - 'a') + shift) % 26 + 'a';
      putchar(encryInput);
    }
    else {
      putchar(eachInput);
    }
  }

  return 0;
}

