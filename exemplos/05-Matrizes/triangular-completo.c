#include <stdio.h>

main() {
  int matriz [5][5];
  int i, j;
  int inferior;
  
  /*Leitura*/
  for (i = 0; i < 5; i++) 
    for (j = 0; j < 5; j++) {
      printf ("Matriz[%d][%d]: ", i, j);
      scanf ("%d", &matriz[i][j]);
    }

  /*Escrita*/
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) 
      printf ("%3d ", matriz[i][j]);
    printf ("\n");
  }

  inferior = 1;
  for (i = 0; i < 5; i++) 
    for (j = i + 1; j < 5; j++) {
      if (matriz[i][j] != 0) {
	inferior = 0;
      }
    }

  if (inferior) {
    printf("A matriz é triangular inferior\n");
  } else {
    printf("A matriz não é triangular inferior\n");
  }
}
