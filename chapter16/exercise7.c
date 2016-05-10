#include <stdio.h>

struct fraction {
  int numerator, denominator;
};

void ToGCD(struct fraction *f);
int GCD(int n, int d);
void PrintFrac(struct fraction f);
struct fraction Add(struct fraction *f1,
                    struct fraction *f2);
struct fraction Substrate(struct fraction *f1,
                          struct fraction *f2);
struct fraction Multiply(struct fraction *f1,
                         struct fraction *f2);
struct fraction Divide(struct fraction *f1,
                       struct fraction *f2);


int main(void)
{
  struct fraction test1 = {1024, 64};
  struct fraction test2 = {8, 512};
  struct fraction *t1 = &test1;
  struct fraction *t2 = &test2;

  PrintFrac(Add(t1, t2));
  PrintFrac(Substrate(t1, t2));
  PrintFrac(Multiply(t1, t2));
  PrintFrac(Divide(t1, t2));

  return 0;
}


void PrintFrac(struct fraction f) {
  printf("%d/%d \n", f.numerator, f.denominator);
  return;
}

void ToGCD(struct fraction *f) {

  int gcd = GCD(f->numerator, f->denominator);
  f->numerator /= gcd;
  f->denominator /= gcd;

  return;
}

int GCD(int n, int m) {

  return n == 0 ? m : GCD(m % n, n);

}

struct fraction Add(struct fraction *f1,
                    struct fraction *f2) {

  struct fraction res;

  res.numerator = f1->denominator * f2->numerator +
    f2->denominator * f1->numerator;
  res.denominator = f1->denominator * f2->denominator;

  struct fraction *r = &res;
  ToGCD(r);

  return res;

}

struct fraction Substrate(struct fraction *f1,
                          struct fraction *f2) {

  struct fraction res;

  res.numerator = -f1->denominator * f2->numerator +
    f2->denominator * f1->numerator;
  res.denominator = f1->denominator * f2->denominator;

  struct fraction *r = &res;
  ToGCD(r);

  return res;

}


struct fraction Multiply(struct fraction *f1,
                         struct fraction *f2) {

  struct fraction res;

  res.numerator = f1->numerator * f2->numerator;
  res.denominator = f1->denominator * f2->denominator;

  struct fraction *r = &res;
  ToGCD(r);

  return res;

}

struct fraction Divide(struct fraction *f1,
                       struct fraction *f2) {

  struct fraction res;

  res.numerator = f1->numerator * f2->denominator;
  res.denominator = f1->denominator * f2->numerator;

  struct fraction *r = &res;
  ToGCD(r);

  return res;

}
