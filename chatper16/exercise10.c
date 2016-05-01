#include <stdio.h>
#include <stdbool.h>

struct point
{
  int x, y;
};

struct rectangle
{
  struct point upper_left;
  struct point lower_right;
};

int Area(struct rectangle a);
struct point Center(struct rectangle a);
struct rectangle Move(struct rectangle a, int x, int y);
bool IsIn(struct rectangle a, struct point p);

int Area(struct rectangle a) {

  int width, height;
  width = a.lower_right.x - a.upper_left.x;
  height = a.upper_left.y - a.lower_right.y;

  int area = width * height;
  return area;

}

struct point Center(struct rectangle a) {

  struct point c;
  c.x = (a.lower_right.x + a.upper_left.x)/2;
  c.y = (a.lower_right.y + a.upper_left.y)/2;

  return c;
}

struct rectangle Move(struct rectangle a, int x, int y) {

  a.upper_left.x += x;
  a.lower_right.x += x;
  a.upper_left.y += y;
  a.lower_right.y += y;

  return a;
}

bool IsIn(struct rectangle a, struct point p) {

  bool isInX = p.x <= a.lower_right.x && p.x >= a.upper_left.x;
  bool isInY = p.y <= a.upper_left.y && p.y >= a.lower_right.y;
  if (isInX && isInY) {
    return true;
  } else {
    return false;
  }

}
