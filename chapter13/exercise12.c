#include <stdio.h>
#include <string.h>

#define LEN 30

void get_extension(const char *file_name, char *extension);

int main(void)
{
  char name[LEN], ext[LEN];
  gets(name);

  get_extension(name, ext);
  puts(ext);

  /* /\* undefined behavior *\/ */
  /* char *tmp1 = "hello"; */
  /* char *tmp2 = "helloworld"; */
  /* get_extension(tmp1, tmp2); */
  /* puts(tmp2); */

  return 0;
}


void get_extension(const char *file_name, char *extension) {

  while(*file_name++) {
    if (*file_name == '.') {
      strcpy(extension, file_name + 1);
      return;
    } else {}
  }

  strcpy(extension, "");

  return;
}
