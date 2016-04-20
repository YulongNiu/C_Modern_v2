#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *filename,
                    const char *extension);

int main(void) {

  char testName[] = "hello.tXt";
  char ext[] = "TxT";

  printf("%3d\n", test_extension(testName, ext));

  return 0;
}

bool test_extension(const char *filename,
                    const char *extension) {

  const char *p;
  for (p = filename; *p != '.'; ++p)
    ;

  while(*extension) {
    if (toupper(*p) != toupper(*extension)) {
      return false;
    } else {
      ++p;
      ++extension;
    }
  }

  return true;
}
