#include <stdio.h>
int main(void) {
  int nlinhas;
  int ncols;
  printf("Digite nlinhas e ncols: ");
  scanf("%d %d", &nlinhas, &ncols);

  int M[nlinhas][ncols];
  for (int l = 0; l < nlinhas; l++) {
    for (int c = 0; c < ncols; c++) {
      printf("Digite a posicao %d %d\n", l, c);
      scanf("%d", &M[l][c]);
    }
  }

  // [0][0] = 1 [0][1] = 0 [0][2] = 0
  // [1][0] = 2 [1][1] = 1 [1][2] = 0
  // [2][0] = 3 [2][1] = 4 [2][2] = 9

  int diag_inf = 1;
  for (int c = 1; c < ncols; c++) {
    for (int l = c-1; l >= 0; l--) {
      if (M[l][c] != 0) {
        diag_inf = 0;
      }
    }
  }


  return 0;
}
