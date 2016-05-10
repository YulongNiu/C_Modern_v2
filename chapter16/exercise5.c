#include <stdio.h>
#include <stdbool.h>

#define LEAPFEB 29
#define COMMONFEB 28

struct date {
  int month, day, year;
};

int day_of_year(struct date *d);
int compare_dates(struct date *d1, struct date *d2);
bool IsLeapYear(int year);
int SumMonthAhead(const int m[], int idx);

int main(void)
{
  struct date test1 = {1, 1, 2000};
  struct date test2 = {1, 1, 2010};

  struct date *t1 = &test1;
  struct date *t2 = &test2;

  printf("test1 is %d \n", day_of_year(t1));
  printf("test1 is %d \n", day_of_year(t2));

  if (compare_dates(t1, t2) < 0) {
    printf("t1 is earlier \n");
  }
  else if (compare_dates(t1, t2) == 0) {
    printf("equal \n");
  }
  else {
    printf("t2 is earlier \n");
  }

  return 0;
}


int day_of_year(struct date *d) {
  const int leapMonthDays[] = {31, LEAPFEB, 31, 30,
                               31, 30, 31, 31,
                               30, 31, 30, 31};
  const int commonMonthDays[] = {31, COMMONFEB, 31, 30,
                                 31, 30, 31, 31,
                                 30, 31, 30, 31};

  int sumDay = 0;
  if (IsLeapYear(d->year)) {
    sumDay = SumMonthAhead(leapMonthDays, d->month - 1) + d->day;
  } else {
    sumDay = SumMonthAhead(commonMonthDays, d->month - 1) + d->day;
  }

  return sumDay;

}


int compare_dates(struct date *d1, struct date *d2) {

  if (d1->year < d2->year) {
    return -1;
  }
  else if (d1->year > d2->year) {
    return 1;
  }
  else {
    int day1 = day_of_year(d1);
    int day2 = day_of_year(d2);
    if (day1 < day2) {
      return -1;
    }
    else if (day1 == day2) {
      return 0;
    }
    else {
      return 1;
    }
  }
}


bool IsLeapYear(int year) {
  if (year % 400 == 0) {
    return true;
  }
  else if (year % 100 != 0 && year % 4 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int SumMonthAhead(const int m[], int idx) {
  int sum = 0;

  for (int i = 0; i < idx; ++i) {
    sum += m[i];
  }

  return sum;
}
