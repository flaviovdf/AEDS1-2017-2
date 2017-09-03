/*
 *  Exibe uma linha com n asteriscos
 */

#include <stdio.h>

main() {

  int i, n;

  printf("Tamanho: ");
  scanf("%d", &n);

  i = 0;
  while (i < n) {
    printf ("*");
    i++;
  }
  printf ("\n");    
  n--;

}

