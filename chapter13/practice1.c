#include <stdio.h>
#include <string.h>

void MaxMin(char **list, int *max, int *min);

int main(void)
{
  /* text example */
  char *test[] = {"dog", "zebra", "rabbit",
                  "catfish", "walrus", "cat",
                  "fish", NULL};
  int min = 0, max = 0;

  MaxMin(test, &max, &min);

  puts(test[max]);
  puts(test[min]);

  return 0;
}


void MaxMin(char **list, int *max, int *min) {

  int i = 0;

  for (; list[i] != NULL; ++i) {
    if (strcmp(list[i], list[*max]) > 0) {
      *max = i;
    }
    else if (strcmp(list[i], list[*min]) < 0) {
      *min = i;
    }
    else {}
  }

  return;
}

