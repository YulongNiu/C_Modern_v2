#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

double compute_average_word_length(const char *sentence);

int main(void)
{

  char inputS[MAXLEN];

  printf("Enter a sentence: ");
  gets(inputS);

  printf("Average word length: %.3g \n", compute_average_word_length(inputS));
  return 0;
}


double compute_average_word_length(const char *sentence) {

  int wordNum, notCharNum;
  wordNum = notCharNum = 0;

  /* last char must be '.', '!', or '?' */
  int len = strlen(sentence);

  for(int i = 0; i < len; ++i) {
    if(sentence[i] == ' ') {
      ++wordNum;
      ++notCharNum;
    }
    else if (sentence[i] == ',') {
      ++wordNum;
      notCharNum += 2;
      ++i;
    }
    else {}
  }

  /* add last word and last character*/
  ++wordNum;
  ++notCharNum;

  double aveLen;
  aveLen = (len - notCharNum + 0.0) / wordNum;
  /* printf("notCharNum is %3d \n", notCharNum); */
  /* printf("wordNum is %3d \n", wordNum); */

  return aveLen;
}
