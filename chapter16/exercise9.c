#include <stdio.h>
#include <stdbool.h>

struct color
{
  int red;
  int green;
  int blue;
};

int Shrink (int a);
void PrintColor(struct color c);
struct color make_color(int red, int green, int blue);
int grtRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
int Bright(int a);
struct color darker(struct color c);

int main(void)
{
  struct color testCol;

  testCol = make_color(260, -1, 255);
  PrintColor(testCol);
  PrintColor(brighter((struct color) {0, 4, 255}));
  PrintColor(darker((struct color) {5, 10, 15}));

  return 0;
}

struct color make_color(int red, int green, int blue) {

  struct color colorRes;

  colorRes.red = Shrink(red);
  colorRes.green = Shrink(green);
  colorRes.blue = Shrink(blue);

  return colorRes;

}

int grtRed(struct color c) {
  return c.red;
}

bool equal_color(struct color color1, struct color color2) {

  if (color1.red == color2.red &&
      color1.blue == color2.blue &&
      color1.green == color2.green) {
    return true;
  } else {
    return false;
  }
}

struct color brighter(struct color c) {

  if (c.red == 0 &&
      c.blue == 0 &&
      c.green == 0) {
    return (struct color){3, 3, 3};
  } else {
    c.red = Bright(c.red);
    c.green = Bright(c.green);
    c.blue = Bright(c.blue);
    return c;
  }

}

struct color darker(struct color c) {

  c.red *= 0.7;
  c.blue *= 0.7;
  c.green *= 0.7;

  return c;
}

int Shrink (int a) {

  if (a < 0) {
    return 0;
  }
  else if (a > 255) {
    return 255;
  }
  else {
    return a;
  }

}

int Bright(int a) {
  if (a > 0 && a < 3) {
    return 4;
  } else {
    return a/0.7;
  }
}

void PrintColor(struct color c) {
  printf("color is %d-%d-%d \n", c.red, c.green, c.blue);
}
