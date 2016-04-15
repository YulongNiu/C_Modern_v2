#include <stdio.h>
#include <math.h>

#define VOLUMN_FACTOR (4.0f / 3.0f)
#define PI (acos(-1.0f))

int main(void)
{
  float radius, volumn;

  printf("Please input the radius: \n");
  scanf("%f", &radius);

  volumn = VOLUMN_FACTOR * PI * radius * radius * radius;

  printf("The volumn is: \n");
  printf("%.2f \n", volumn);

  return 0;
}
