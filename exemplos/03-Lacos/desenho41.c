/*
   Exibe desenhos do tipo:

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

   Base é o número de linhas até a linha mais longa (inclusive).
*/

#include <stdio.h>

int main(void) {

  int i, j, base;

  printf("Base: ");
  scanf("%d", &base);

  for (j = 0; j < base; j++) {
    for (i = 0; i < base - j; i++) 
      printf (" ");
    for (i = 0; i < 2 * j + 1; i++) 
      printf ("*");
    printf ("\n");    
  }

  for (j = base - 2; j >= 0; j--) {
    for (i = 0; i < base - j; i++) 
      printf (" ");
    for (i = 0; i < 2 * j + 1; i++) 
      printf ("*");
    printf ("\n");    
  }
}

