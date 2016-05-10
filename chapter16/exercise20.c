#include <stdio.h>

int main(void)
{
  enum {NORTH, SOURTH, EAST, WEST} direction;

  int x = 1;
  int y = 1;

  direction = 0;

  switch (direction) {
  case EAST: ++x; break;
  case WEST: --x; break;
  case SOURTH: ++y; break;
  case NORTH: --y; break;
  }

  return 0;
}

