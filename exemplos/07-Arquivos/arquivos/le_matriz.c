/*
 * Lê uma matriz de um arquivo. Os dois primeiros inteiros lidos são
 * a dimensão da matriz. A matriz é armazenada em um vetor.
 *
 * Escreve a matriz em um arquivo de saída segundo o formato:
 * linhas = 3
 * colunas = 3
 * mat[0][0] = 1.0
 * mat[0][1] = 2.4
 */
#include<stdio.h>
#include<stdlib.h>

int *le_matriz(int *nlin, int *ncol) {
  FILE *fr;
  int *v;
  int i;

  fr = fopen ("m-in.txt", "r");

  if (fr == NULL) {
    perror("m-in.txt");
    exit(-1);  /* Abandona o programa */
  }

  fscanf(fr, "%d %d", nlin, ncol);
  v = (int *) malloc (*nlin * *ncol * sizeof(int));

  for (i = 0; i < *nlin * *ncol; i++)
    fscanf(fr, "%d", &v[i]);

  fclose(fr);

  return v;
}

void escreve_matriz(int *v, int nlin, int ncol) {
  FILE *fw;
  int i, j;

  fw = fopen ("m-out.txt", "w");

  if (fw == NULL) {
    perror("m-out.txt");
    exit(-1);  /* Abandona o programa */
  }

  fprintf(fw, "linhas = %d\n", nlin); /* Dimensão da matriz */
  fprintf(fw, "colunas = %d\n", ncol);

  for (i = 0; i < nlin; i++)
    for (j = 0; j < ncol; j++)
      fprintf(fw, "mat[%d][%d] = %d\n", i, j, v[i*ncol + j]);

  fclose(fw);
}

int main(void) {
  int *v;
  int nlin, ncol;

  v = le_matriz(&nlin, &ncol);
  escreve_matriz(v, nlin, ncol);
  free(v);

  return 0;
}
