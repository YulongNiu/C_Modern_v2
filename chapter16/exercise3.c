#include <stdio.h>

struct complex
{
  double real;
  double imaginary;
};

struct complex make_complex(double r, double i);
struct complex add_complex(struct complex a1, struct complex a2);


int main(void) {

  struct complex c1, c2, c3;

  c1 = make_complex(1.2, 3.4);
  c2 = make_complex(5.6, 7.8);

  c3 = add_complex(c1, c2);

  printf("c3.real is %.3f and c3.imaginary is %.3f \n", c3.real, c3.imaginary);

  return 0;
}

struct complex make_complex(double r, double i) {

  struct complex comp;

  comp.real = r;
  comp.imaginary = i;

  return comp;

}

struct complex add_complex(struct complex a1, struct complex a2) {

  struct complex comp;

  comp.real = a1.real + a2.real;
  comp.imaginary = a2.imaginary + a2.imaginary;

  return comp;

}
