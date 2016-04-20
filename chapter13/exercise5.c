#include <stdio.h>
#include <ctype.h>

void catitalize(char a[]);

 int main(void)
 {
   char testStr[] = "ab,Cd";
   catitalize(testStr);

   puts(testStr);

   /* /\* undefined behaviour *\/ */
   /* char *testStr2 = "ab,Cd"; */
   /* catitalize(testStr2); */
   /* puts(testStr2); */

   return 0;
 }

void catitalize(char a[]) {

  for(int i = 0; a[i]; ++i) {
    a[i] = toupper(a[i]);
  }

  return;
}

