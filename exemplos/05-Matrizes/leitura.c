#include <stdio.h>
main () {
  int matriz [4][4];
  int i, j;

  /*Leitura*/
  for (i = 0; i < 4; i++) 
    for (j = 0; j < 4; j++) {
      printf ("Matriz[%d][%d]: ", i, j);
      scanf ("%d", &matriz[i][j]);
    }

  /*Escrita*/
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) 
      printf ("%3d ", matriz[i][j]);
    printf ("\n");
  }

}
