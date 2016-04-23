#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAXLEN 30
#define PNUM 6

bool StrEqual(char *plant, char *s);

int main(int argc, char *argv[]) {

  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};

  for (char **p = argv + 1; *p != NULL; ++p) {

    int i = 0;

    for (; i < PNUM; ++i) {
      if (StrEqual(planets[i], *p)) {
        printf("%s is the planet %d. \n", *p, i + 1);
        break;
      } else {}
    }

    if (i == PNUM) {
      printf("%s is not a planet. \n", *p);
    } else {}

  }

  putchar(toupper('\0'));

  return 0;
}

bool StrEqual(char *plant, char *s) {

  for (int i = 0; toupper(plant[i]) == toupper(s[i]); ++i) {
    if (plant[i] == '\0') {
      return true;
    } else {}
  }

  return false;
}
