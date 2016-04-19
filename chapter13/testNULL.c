#include <stdio.h>

int main(void)
{
  char *test[] = {"hello", "it", "is", "me"};

  char **p = test;
  for(; p < test + 4; ++p) {
    printf("%s\n", *p);
  }
  return 0;
}
