#include <stdio.h>

int main(void)
{
  int score, grade;

  printf("Enter numerical grade: ");
  scanf("%d", &score);

  if (score > 100 || score < 0) {
    printf("Wrong input grade. \n");
    return 0;
  }

  grade = score / 10;

  switch (grade) {
  case 9: case 10: printf("Letter grade: A. \n"); break;
  case 8: printf("Letter grade: B. \n"); break;
  case 7: printf("Letter grade: C. \n"); break;
  case 6: printf("Letter grade: D. \n"); break;
  case 5: case 4: case 3: case 2: case 1: case 0: printf("Letter grade: F \n"); break;
  }
  return 0;
}
