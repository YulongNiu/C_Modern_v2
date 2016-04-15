#include <stdio.h>

int main(void)
{
  int num;
  float price;
  int day, month, year;

  printf("Enter item number: ");
  scanf("%d", &num);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$%6.2f\t%d/%d/%d\n", num, price, day, month, year);
  return 0;
}
