#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[20];
  strcpy(str, "tire-bouchon");
  strcpy(&str[4], "d-or-wi");
  strcat(str, "red");

  puts(str);
  return 0;
}

