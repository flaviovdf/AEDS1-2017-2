#include <stdio.h>
#define LIM 10

main() {
  int mat[LIM][LIM];
  int i = 0, j = 0;
  int numero;

  for (i = 0; i < LIM; i++) 
    for (j = 0; j < LIM; j++) {
      printf("Matriz[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }

  numero = 0;
  for (i = 0; i < LIM; i++) 
    for (j = 0; j < LIM; j++) {
      if (mat[i][j] != 0) {
	printf("%d %d %d\n", i, j, mat[i][j]);
	numero++;
      }
    }
  printf("%d elemento(s) não nulo(s)\n", numero);
}
