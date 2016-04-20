#include <stdio.h>
#include <string.h>

#define LEN 100

void build_index_url(const char *domain, char *index_url);

int main(void)
{
  char name[LEN], ext[LEN];
  gets(name);

  build_index_url(name, ext);
  puts(ext);

  return 0;
}


void build_index_url(const char *domain, char *index_url) {

  strcat(strcpy(index_url, "http://www."), strcat(domain, "/index.html"));

  return;
}
