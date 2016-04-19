#include <stdio.h>
#include <string.h>

void *duplicate(char *a, char *copy);

int main(void)
{
  char *a = "abc";
  char b[4];

  duplicate(a, b);
  puts(b);
}


void *duplicate(char *a, char *copy) {
  if (a == NULL) {
    return NULL;
  } else {
    strcpy(copy, a);
    return copy;
  }
}
