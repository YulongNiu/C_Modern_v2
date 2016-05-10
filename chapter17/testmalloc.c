#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *a, char *b);

int main(void)
{
  puts(concat("hello ", "world!"));
  return 0;
}

char *concat(char *a, char *b) {

  char *res;
  res = malloc(strlen(a) + strlen(b) + 1);

  if (res == NULL) {
    printf("it failed \b");
    exit(EXIT_FAILURE);
  } else {
    strcpy(res, a);
    strcat(res, b);
  }

  return res;
}

