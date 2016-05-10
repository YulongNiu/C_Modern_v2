#include <stdio.h>

typedef struct {
   int ele1;
   char ele2;
 } Test1;

typedef union {
  int ele1;
  double ele2;
} Test2;

typedef enum {CIRCLE, RECTANGLE} Test3;

int main(void)
{
  /* Test3 testEnum; */
  /* testEnum = 0; */
  Test1 p1 = {.ele1 = 1};
  Test2 p2 = {.ele2 = 0.2};
  Test3 p3 = CIRCLE;

  printf("%d \n", p3);
  printf("%f \n", p2.ele2);
  printf("%d \n", p1.ele1);

  return 0;
}


