#include <stdio.h>
#include <math.h>

int main(void)
{
  double x, eachVal, error, y = 1.0;

  printf("Enter a positive integer: ");
  scanf("%lf", &x);

  do {
    eachVal = (x/y + y)/2;
    error = fabs(eachVal - y) / eachVal;
    y = eachVal;
  } while(error > 1e-5);


  printf("Factorial of %.0f: %.5f \n", x, eachVal);

  return 0;
}

