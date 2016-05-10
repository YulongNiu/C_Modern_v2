#include <stdio.h>

#define NUM 8

enum Piece {EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING};
enum Color {BLACK, WHITE};

struct Square {
  enum Piece p;
  enum Color c;
};

void Initial(struct Square b[NUM][NUM]);
void Print(struct Square b[NUM][NUM]);

int main(void)
{
  struct Square b[NUM][NUM];

  Initial(b);

  Print(b);

  return 0;
}

void Initial(struct Square b[NUM][NUM]) {

  for (int i = 0; i < NUM; ++i) {
    for (int j = 0; j < NUM; ++j) {

      if (i == 0 || i == 7) {
        switch (j) {
        case 0 : case 7 :
          b[i][j].p = ROOK;
          break;
        case 1 : case 6:
          b[i][j].p = KNIGHT;
          break;
        case 2 : case 5 :
          b[i][j].p = BISHOP;
          break;
        case 3:
          b[i][j].p = QUEEN;
          break;
        case 4:
          b[i][j].p = KING;
          break;
        }
      }
      else if (i == 1 || i == 6) {
        b[i][j].p = PAWN;
      }
      else {
        b[i][j].p = EMPTY;
      }

      if ((i + j) % 2 == 0) {
        b[i][j].c = BLACK;
      } else {
        b[i][j].c = WHITE;
      }
    }
  }
}

void Print(struct Square b[NUM][NUM]) {
  for (int i = 0; i < NUM; ++i) {
    for (int j = 0; j < NUM; ++j) {
      printf("|%d%d", b[i][j].c, b[i][j].p);
    }
    printf("|\n");
  }
}
