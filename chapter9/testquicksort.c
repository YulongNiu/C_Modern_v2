#include <stdio.h>

#define LEN 7

int SortSingleArray(int a[], int low, int high);
void SortArray(int a[], int low, int high);

int main(void)
{
  int inputArray[LEN] = {12, 6, 3, 18, 7, 15, 10};

  SortArray(inputArray, 0, LEN - 1);

  for (int i = 0; i < LEN; i++) {
    printf("%3d", inputArray[i]);
  }

  putchar('\n');
  return 0;
}


void SortArray(int a[], int low, int high) {
  if (low < high) {
    int middle;
    middle = SortSingleArray(a, low, high);

    SortArray(a, low, middle - 1);
    SortArray(a, middle + 1, high);
  }
  else {}

}

int SortSingleArray(int a[], int low, int high) {

  /* extract first element  */
  int firstEle;
  firstEle = a[low];

  /* record low and high point  */
  int highPoint;
  highPoint = 1;

  /* low is start and high is end */
  for ( ; ;) {
    if (low < high) {
      /* check point */
      if (highPoint) {
        if (a[high] >= firstEle) {
          high--;
        }
        else {
          a[low] = a[high];
          low++;
          highPoint = 0;
        }
      }
      else {
        if (a[low] <= firstEle) {
          low++;
        }
        else {
          a[high] = a[low];
          high--;
          highPoint = 1;
        }
      }
    }
    else {
      a[low] = firstEle;
      break;
    }
  }

  return low;

}
