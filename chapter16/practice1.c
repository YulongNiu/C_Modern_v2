#include <stdio.h>

#define NUM 6

int main(void)
{
  struct dialing_code {
    char *country;
    int code;
  };

  const struct dialing_code country_codes[] = {
    {"Argentina", 54}, {"Bangladesh", 880},
    {"Brazil", 55}, {"Burma (Myanmar)", 95},
    {"China", 86}, {"Colombia", 57}};

  int inputCode;
  printf("Input code: ");
  scanf("%d", &inputCode);

  int i = 0;
  for (; i < NUM && country_codes[i].code != inputCode; ++i)
    ;

  if (i == NUM) {
    printf("No country is found. \n");
  } else {
    printf("country is %s \n", country_codes[i].country);
  }

  return 0;
}

