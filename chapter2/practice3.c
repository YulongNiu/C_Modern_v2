#include <stdio.h>

int main(void)
{
  float inputAmount;

  printf("Enter an amount: ");
  scanf("%f", &inputAmount);

  printf("With tax added: %.2f \n", inputAmount * (1.0f + 0.05f));
  return 0;
}
