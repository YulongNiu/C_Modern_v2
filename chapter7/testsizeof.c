#include <stdio.h>

int main(void)
{
  printf("Size of char is %lu \n", (unsigned long) sizeof(char));
  printf("Size of _Bool is %lu \n", (unsigned long) sizeof(_Bool));
  printf("Size of short is %lu \n", (unsigned long) sizeof(short));
  printf("Size of unsigned short is %lu \n", (unsigned long) sizeof(unsigned short));
  printf("Size of int is %lu \n", (unsigned long) sizeof(int));
  printf("Size of unsigned int is %lu \n", (unsigned long) sizeof(unsigned int));
  printf("Size of long int is %lu \n", (unsigned long) sizeof(long));
  printf("Size of unsigned long is %lu \n", (unsigned long) sizeof(unsigned long));
  printf("Size of long long is %lu \n", (unsigned long) sizeof(long long));
  printf("Size of unsigned long long is %lu \n", (unsigned long) sizeof(unsigned long long));
  printf("Size of float int is %lu \n", (unsigned long) sizeof(float));
  printf("Size of double int is %lu \n", (unsigned long) sizeof(double));
  printf("Size of long double int is %lu \n", (unsigned long) sizeof(long double));
  return 0;
}

