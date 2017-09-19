#include <stdio.h>
int main(void) {
  int nlinhas;
  int ncols;
  printf("Digite nlinhas e ncols: ");
  scanf("%d %d", &nlinhas, &ncols);

  int matriz[nlinhas][ncols];
  for (int l = 0; l < nlinhas; l++) {
    for (int c = 0; c < ncols; c++) {
      printf("Digite a posicao %d %d\n", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }

  for (int l = 0; l < nlinhas; l++) {
    for (int c = 0; c < ncols; c++) {
      printf("%3d ", matriz[l][c]);
    }
    printf("\n");
  }

  return 0;
}
