#include <stdio.h>
#include <string.h>

void remove_filename(char url[]);

int main(void)
{
  char url[] = "http://www.knking.com/index.html";
  remove_filename(url);
  puts(url);

  return 0;
}

void remove_filename(char url[]) {

  int len = strlen(url);
  int i = len - 1;

  for(; url[i] != '/'; --i)
    ;

  url[i] = '\0';
}
