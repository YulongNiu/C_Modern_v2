#include <stdio.h>

char *TestStrCpy(char *s, const char *t);

int main(void)
{
  char *t = "test";
  /* /\* not right *\/ */
  /* char *s = "hell"; */
  char s[5];

  TestStrCpy(s, t);

  puts(s);

  return 0;
}



char *TestStrCpy(char *s, const char *t) {
  char *fs = s;

  while((*s++ = *t++) != '\0')
    ;

  return fs;
}
