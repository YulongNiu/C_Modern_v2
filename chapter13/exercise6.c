#include <stdio.h>
#include <string.h>

void censor(char a[]);

int main(void)
{
  char test[] = "food fool";
  censor(test);

  puts(test);

  return 0;
}


void censor(char a[]) {

  for (int i = 0; a[i]; ++i) {
    if (a[i] == 'f' && a[i+1] == 'o' && a[i+2] == 'o') {
        a[i] = a[i+1] = a[i+2] = 'x';
        i += 2;
    } else {}
  }

  return;

}
