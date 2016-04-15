#include <stdio.h>

int main(void)
{
  float inputNum;
  double eValue = 1.0f;

  int i;

  printf("Input the number:");
  scanf("%f", &inputNum);

  for (i = 1; ;i++) {
    if (Fac(i) > inputNum) {
      eValue += 1.0 / Fac(i);
    }
    else {
      break;
    }
  }
  printf("%20.20f\n", eValue);
  return 0;
}

int Fac(int n) {

  int factorial;

  if (n == 1) {
    factorial = 1;
  }
  else {
    factorial = Fac(n - 1) * n;
  }

  return factorial;
}

