#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 30
#define PNUM 6

void ToLowerStr(char *a, char lowStr[]);

int main(int argc, char *argv[]) {

  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};

  for (char **p = argv + 1; *p != NULL; ++p) {

    char stdP[MAXLEN];

    ToLowerStr(*p, stdP);

    int i = 0;
    for (; i < PNUM; ++i) {
      if (strcmp(stdP, planets[i]) == 0) {
        printf("%s is the planet %d. \n", *p, i + 1);
        break;
      } else {}
    }

    if (i == PNUM) {
      printf("%s is not a planet. \n", *p);
    } else {}

  }

  return 0;
}

void ToLowerStr(char *a, char lowStr[]) {

  int i = 1;

  lowStr[0] = toupper(a[0]);

  for (; a[i]; ++i) {
    lowStr[i] = tolower(a[i]);
  }

  lowStr[i] = '\0';

}
