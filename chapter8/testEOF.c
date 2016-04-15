#include <stdio.h>

int main(void) {

  char eachInput;
  while((eachInput = getchar()) != EOF) {
    printf("%c", eachInput);
  }

  return 0;
}
