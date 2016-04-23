#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RANKNUM 13
#define SUITNUM 4

int main(void)
{
  const char *rank[] = {"Two", "Three", "Four", "Five", "Six",
                        "Seven", "Eight", "Nine", "Ten", "Jack",
                        "Queen", "King", "Ace"};

  const char *suit[] = {"Club", "Diamond", "Heart", "Spade"};

  int idx[RANKNUM * SUITNUM] = {0};

  srand((unsigned) time(NULL));

  /* card number */
  int num;

  printf("Enter number of cards in hand: ");
  scanf("%d",&num);

  for (int i = 0; i < num; ++i) {

    int eachRank, eachIdx, eachSuit;

    do {
      eachRank = rand() % RANKNUM;
      eachSuit = rand() % SUITNUM;
      eachIdx = eachRank * (eachSuit + 1);
      idx[eachIdx] += 1;
    } while (idx[eachIdx] != 1);

    printf("%s of %s \n", rank[eachRank], suit[eachSuit]);

  }

  return 0;
}
