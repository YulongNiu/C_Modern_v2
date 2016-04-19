#include <stdio.h>

int StrLen(char *a);
int ArrayLen(int *a);
int add1(int *a);

int tmp = 1;

int main(void)
{
  char *s1 = "abcde";
  char s2[] = "abc";

  int a[] = {1, 2, 3, 0};
  int *b = a;

  printf("%d\n", StrLen(s1));
  printf("%d\n", StrLen(s2));

  printf("%d\n", ArrayLen(a));
  printf("%d\n", ArrayLen(b));

  add1(&tmp);

  printf("%d\n", tmp);

  return 0;
}


int StrLen(char *a) {
  int count = 0;

  for(; *a; ++a) {
    ++count;
  }

  return count;
}

int ArrayLen(int *a) {
  int count = 0;

  for (; *a; ++a) {
    ++count;
  }

  return count;
}

int add1(int *a) {
  ++*a;
  return *a;
}
