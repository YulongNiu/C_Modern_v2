#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sum = 0;

  for (char **p = argv + 1; *p != NULL; ++p) {
    int eachInput;
    eachInput = atoi(*p);
    sum += eachInput;
  }

  printf("Total: %d\n", sum);

  return 0;
}



