#include <stdio.h>
#define LIM 5

main() {
  int mat1[LIM][LIM];
  int mat2[LIM][LIM];
  int resp[LIM][LIM];
  int i, j, k;

  for (i = 0; i < LIM; i++) {
    for (j = 0; j < LIM; j++) {
      printf("Digite o valor da posição (%d,%d) da matriz 1: ", i, j);
      scanf("%d", &mat1[i][j]);
      printf("Digite o valor da posição (%d,%d) da matriz 2: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  printf("Matriz 1\n");
  for (i = 0; i < LIM; i++) { 
    for (j = 0; j < LIM; j++) 
      printf("%d ", mat1[i][j]);
    printf("\n");
  }

  printf("Matriz 2\n");
  for (i = 0; i < LIM; i++) { 
    for (j = 0; j < LIM; j++) 
      printf("%d ", mat2[i][j]);
    printf("\n");
  }

  for (i = 0; i < LIM; i++)
    for (j = 0; j < LIM; j++) 
      resp[i][j] = 0;

  for (i = 0; i < LIM; i++)
    for (j = 0; j < LIM; j++) 
      for (k = 0; k < LIM; k++)
        resp[i][j] += mat1[i][k] * mat2[k][j];

  printf("Matriz 1 * Matriz 2\n");
  for (i = 0; i < LIM; i++) { 
    for (j = 0; j < LIM; j++) 
      printf("%d ", resp[i][j]);
    printf("\n");
  }
}
