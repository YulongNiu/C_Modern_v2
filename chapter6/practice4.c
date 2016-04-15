#include <stdio.h>

int main(void)
{
  int inputNum;
  int i;

  printf("Please input the number: ");
  scanf("%d", &inputNum);

  if (inputNum < 5) {
    printf("Please input the number bigger than 5. \n");
  } else {
    for (i = 2; i * i < inputNum; printf("%d\n", i * i), i += 2)
      ;
  }
  return 0;
}
