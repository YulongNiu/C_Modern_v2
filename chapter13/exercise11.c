#include <stdio.h>

#define LEN 20

int StrCmp(char *s, char *t);

int main(void)
{
  char str1[LEN];
  char str2[LEN];

  /* gets_s(str1, LEN); */
  /* gets_s(str2, LEN); */

  gets(str1);
  gets(str2);

  printf("%3d\n", StrCmp(str1, str2));
  return 0;
}

int StrCmp(char *s, char *t) {
  while (*t && *s && *s++ == *t++)
    ;

  return *s - *t;
}
