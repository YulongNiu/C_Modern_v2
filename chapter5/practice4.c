#include <stdio.h>

int main(void)
{
  int speed;

  printf("Input the wind speed: \n");
  scanf("%d", &speed);

  if (speed > 63) {
    printf("It is Hurricane. \n");
  }
  else if (speed >= 48) {
    printf("It is Storm. \n");
  }
  else if (speed >= 28) {
    printf("It is Gale. \n");
  }
  else if (speed >= 4) {
    printf("It is Breeze. \n");
  }
  else if (speed >= 1) {
    printf("It is Light air. \n");
  }
  else if (speed < 1) {
    printf("It is Calm. \n");
  }

  return 0;
}
