#include <stdio.h>
#include <math.h>

#define RECTANGLE 1
#define CIRCLE 2
#define PI (asin(1) * 2)

struct point
{
  int x;
  int y;
};

struct shape
{
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
};

double Area(struct shape s);
struct shape Move(struct shape s, int x, int y);
struct shape Shrinkage(struct shape s, double c);

int main(void)
{
  struct shape s, s2, s3;

  s.shape_kind = CIRCLE;
  s.center.x = 1;
  s.center.y = 1;
  s.u.circle.radius = 2;

  s2 = Move(s, -1, -1);
  s3 = Shrinkage(s2, 0.5);

  printf("%.3f \n", Area(s));
  printf("x = %d, y = %d \n", s2.center.x, s2.center.y);
  printf("%.3f \n", Area(s3));

  return 0;
}

double Area(struct shape s) {

  if (s.shape_kind == RECTANGLE) {
    return s.u.rectangle.height * s.u.rectangle.width;
  } else {
    return PI * s.u.circle.radius * s.u.circle.radius;
  }

}

struct shape Move(struct shape s, int x, int y) {

  s.center.x += x;
  s.center.y += y;

  return s;
}

struct shape Shrinkage(struct shape s, double c) {

  if (s.shape_kind == RECTANGLE) {
    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;
  } else {
    s.u.circle.radius *= c;
  }

  return s;
}
