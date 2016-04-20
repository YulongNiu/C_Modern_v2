#include <stdio.h>

int main(int argc, char *argv[])
{
  for(char **s = argv + argc - 1; s > argv; --s) {
    puts(*s);
  }
  return 0;
}
