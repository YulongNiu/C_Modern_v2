#include <stdio.h>

void Print(int *a, int len);

int main(void)
{
  enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

  int piece_value [] = {200, 9, 5, 3, 3, 1};

  int piece_value2[] = {[KING] = 200, [QUEEN] = 9, [ROOK] = 5,
                        [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1};

  Print(piece_value, 6);

  Print(piece_value2, 6);

  return 0;
}

void Print(int *a, int len) {

  for (int i = 0; i < len; ++i) {
    printf("%3d", a[i]);
  }

  printf("\n");
}
