#include <stdio.h>
#define LIM 10

main() {

  int mat[LIM][LIM];
  int i=0,j=0;

  for (i = 0; i < LIM; i++) 
    for (j = 0; j < LIM; j++) 
      mat[i][j]=0;

  printf("Digite o índice da coluna e o índice da linha: ");
  scanf("%d %d", &i, &j);
  while((i >= 0) && (j >= 0)) {
    printf("Digite o valor da posição (%d,%d): ", i, j);
    scanf("%d", &mat[i][j]);

    printf("Digite o índice da coluna e o índice da linha: ");
    scanf("%d %d", &i, &j);
  }

  printf("%4d      ", -1);
  for (j = 0; j < LIM; j++) 
    printf("%4d ", j);
  printf("\n\n");

  for (i = 0; i < LIM; i++) {
    printf ("%4d      ", i);
    for (j = 0; j < LIM; j++) 
      printf("%4d ", mat[i][j]);
    printf("\n");
  }
}
