#include <stdio.h>

int main(void)
{
  struct doubleL
  {
    double real;
    double imaginary;
  } c1, c2, c3;

  c1.real = 0.0;
  c1.imaginary = 1.0;

  c2.real = 1.0;
  c2.imaginary = 0.0;

  /* c1 = c2; */

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;

  printf("c3.real is %.3f and c3.imaginary is %.3f \n",
         c3.real,
         c3.imaginary);
  return 0;
}
