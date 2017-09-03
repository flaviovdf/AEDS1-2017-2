/*
 *  Exibe uma linha com n asteriscos
 */

#include <stdio.h>

main() {

  int i, n;

  printf("Tamanho: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) 
    printf ("*");
  printf ("\n");    
}

