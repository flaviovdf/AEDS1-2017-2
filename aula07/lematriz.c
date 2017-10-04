#include <stdio.h>
int norma(int nl, int nc, int matriz[nl][nc]) {
  int resultado = 0;
  for (int i = 0; i < nl; i++)
    for (int j = 0; j < nc; j++)
      resultado += matriz[i][j] * matriz[i][j];
  return resultado;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Passe um arquivo\n");
    return 1;
  }
  FILE *leitura = fopen(argv[1], "r");
  if (leitura == NULL) {
    printf("Arquivo nao existe %s!\n", argv[1]);
    return 1;
  }
  int num_matrizes;
  int num_linhas;
  int num_colunas;
  fscanf(leitura, "%d", &num_matrizes);
  for (int m = 0; m < num_matrizes; m++) {
    fscanf(leitura, "%d %d", &num_linhas, &num_colunas);
    int matriz[num_linhas][num_colunas];
    for (int i = 0; i < num_linhas; i++)
      for (int j = 0; j < num_colunas; j++)
        fscanf(leitura, "%d", &matriz[i][j]);
    int n = norma(num_linhas, num_colunas, matriz);
    printf("%d\n", n);
  }
}
