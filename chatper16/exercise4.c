#include <stdio.h>

typedef struct
{
  double real;
  double imaginary;
} Complex;

Complex make_complex(double r, double i);
Complex add_complex(Complex *a1, Complex *a2);


int main(void) {

  Complex c1, c2, c3;

  c1 = make_complex(1.2, 3.4);
  c2 = make_complex(5.6, 7.8);

  c3 = add_complex(&c1, &c2);

  printf("c3.real is %.3f and c3.imaginary is %.3f \n", c3.real, c3.imaginary);

  return 0;
}

Complex make_complex(double r, double i) {

  Complex comp;

  comp.real = r;
  comp.imaginary = i;

  return comp;

}

Complex add_complex(Complex *a1, Complex *a2) {

  Complex comp;

  comp.real = a1->real + a2->real;
  comp.imaginary = a2->imaginary + a2->imaginary;

  return comp;

}
