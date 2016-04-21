#include <stdio.h>
#include <string.h>

#define MAXLEN 20
#define NEDLEN 4

int main(void)
{
  char max[MAXLEN];
  char min[MAXLEN];
  char eachInput[MAXLEN];

  printf("Enter word: ");
  gets(eachInput);
  strcpy(max, eachInput);
  strcpy(min, eachInput);

  while (strlen(eachInput) != 4) {
    printf("Enter word: ");
    gets(eachInput);
    if (strcmp(eachInput, max) > 0) {
      strcpy(max, eachInput);
    }
    else if (strcmp(eachInput, min) < 0) {
      strcpy(min, eachInput);
    }
    else {}
  }

  printf("Smallest word: %s\n", min);
  printf("Largest word: %s\n", max);

  return 0;
}

