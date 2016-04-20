#include <stdio.h>

int count_space(char *a);

int main(void)
{
  char test[] = "hello world .";

  printf("%d\n", count_space(test));

  return 0;
}

int count_space(char *a) {
  int count = 0;

  while(*a++) {
    if (*a == ' ') {
      ++count;
    } else {}
  }

  return count;
}
