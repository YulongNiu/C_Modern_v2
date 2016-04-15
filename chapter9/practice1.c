#include <stdio.h>

#define LEN 7

void find_max(int a[], int len);

void selection_sort(int a[], int len);

int main(void)
{
  int testArray[] = {3, 4, 9, 15, 15, 2, 6};

 selection_sort(testArray, LEN);

  for (int i = 0; i < LEN; i++) {
    printf("%-3d", testArray[i]);
  }

  putchar('\n');

  return 0;
}

void selection_sort(int a[], int len) {
  if (len < 1) {
    return;
  }
  else {
    find_max(a, len);
    selection_sort(a, len - 1);
  }
}

void find_max(int a[], int len) {

  int max = a[0];
  int idx = 0;

  for (int i = 1; i < len; i++) {
    if (a[i] > max) {
      max = a[i];
      idx = i;
    }
    else {}
  }

  /* compare last element with max */
  if (idx != len - 1) {
    a[idx] = a[len - 1];
    a[len - 1] = max;
  }
  else {}

}
