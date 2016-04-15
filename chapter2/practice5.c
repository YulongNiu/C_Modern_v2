#include <stdio.h>

int main(void)
{
  float totalAmount, yearRate, monthlyPay;
  float monthRate, firstLeft, secondLeft, thirdLeft;

  printf("Enter amount of loan: ");
  scanf("%f", &totalAmount);

  printf("Enter interest rate: ");
  scanf("%f", &yearRate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPay);

  monthRate = yearRate * 0.01f / 12.0f;

  firstLeft = totalAmount * (1.0f + monthRate) - monthlyPay;
  secondLeft = firstLeft * (1.0f + monthRate) - monthlyPay;
  thirdLeft = secondLeft * (1.0f + monthRate) - monthlyPay;

  printf("Balance remaining after first payment: $%.2f\n", firstLeft);
  printf("Balance remaining after second payment: $%.2f\n", secondLeft);
  printf("Balance remaining after third payment: $%.2f\n", thirdLeft);

  return 0;
}
