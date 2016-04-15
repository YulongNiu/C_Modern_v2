#include <stdio.h>

#define DAY 30
#define HOUR 24

int main(void)
{
  double tempArray[HOUR][DAY];
  double aveTemp[DAY] = {0.0};

  for (int dayIdx = 0; dayIdx < DAY; dayIdx++) {
    for (int hourIdx = 0; hourIdx < HOUR; hourIdx++) {
      tempArray[hourIdx][dayIdx] = hourIdx + 1.0;
    }
  }

  for (int dayIdx = 0; dayIdx < DAY; dayIdx++) {
    for (int hourIdx = 0; hourIdx < HOUR; hourIdx++) {
      aveTemp[dayIdx] += tempArray[hourIdx][dayIdx];
    }
    aveTemp[dayIdx] /= HOUR;
    printf("Average temprature of %d is %.2f. \n", dayIdx + 1, aveTemp[dayIdx]);
  }

  return 0;
}
