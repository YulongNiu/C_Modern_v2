#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
  int height, length, width, volumn, weight;

  printf("Input the height: \n");
  scanf("%d", &height);

  printf("Input the length: \n");
  scanf("%d", &length);

  printf("Input the width: \n");
  scanf("%d", &width);

  /* calculate the volumn */
  volumn = height * length * width;
  weight = volumn / INCHES_PER_POUND + 1;

  printf("The total volumn is %d \n", volumn);
  printf("The dimentional weight is %d \n", weight);

  return 0;
}
