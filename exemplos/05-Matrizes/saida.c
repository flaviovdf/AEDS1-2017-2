#include <stdio.h>
#define LIM 10

main() {
  int mat[LIM][LIM];
  int i = 0, j = 0;

  for (i = 0; i < LIM; i++) 
    for (j = 0; j < LIM; j++) {
      printf("Matriz[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }

  /* Completar */
}
