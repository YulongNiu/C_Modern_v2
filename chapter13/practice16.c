#include <stdio.h>
#include <string.h>

void reverse(char *message);

int main(void)
{
  char test1[] = "test";
  reverse(test1);
  puts(test1);

  char test2[] = "tes";
  reverse(test2);
  puts(test2);

  return 0;
}

void reverse(char *message) {

  int len = strlen(message);
  char *first, *second;
  first = message;
  second = message + len - 1;

  while (first < message + len / 2) {
    char tmp;
    tmp = *first;
    *first = *second;
    *second = tmp;
    ++first;
    --second;
  }

  return;

}
