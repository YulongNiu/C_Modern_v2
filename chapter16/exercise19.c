#include <stdio.h>

#define MAXLEN 40

int main(void)
{
  struct pinball_machine {
    char name[MAXLEN];
    int year;
    enum {EM, SS} type;
    int players;
  };
  
  return 0;
}
