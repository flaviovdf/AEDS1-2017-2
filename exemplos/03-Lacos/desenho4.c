/*
   Exibe desenhos do tipo:
   
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

  Base é o número de linhas até a linha mais longa (inclusive).
   
*/

#include <stdio.h>

main() {

  int i, j, base;

  printf("Base: ");
  scanf("%d", &base);

  j = 0;
  while (j < base) {
    i = 0;
    while (i < base - j - 1) {
      printf (" ");
      i++;
    }
    i = 0;
    while(i <= 2 * j) {
      printf ("*");
      i++;
    }
    printf ("\n");    
    j++;
  }

  j = base - 2;
  while (j >= 0) {
    i = 0;
    while (i < base - j - 1) {
      printf (" ");
      i++;
    }
    i = 0;
    while(i <= 2 * j) {
      printf ("*");
      i++;
    }
    printf ("\n");    
    j--;
  }
}

