/*
   Exibe desenhos do tipo:

   ************
   *****  *****
   ****    ****
   ***      ***
   **        **
   *          *
   *          *
   **        **
   ***      ***
   ****    ****
   *****  *****
   ************

   Base é a metade do número de asteriscos da primeira linha. 
*/

#include <stdio.h>

int main(void) {

  int i, j, base;

  printf("Base: ");
  scanf("%d", &base);

  for (j = 0; j < base; j++) {
    for (i = 0; i < base - j; i++) 
      printf ("*");
    for (i = 0; i < 2 * j; i++) 
      printf (" ");
    for (i = 0; i < base - j; i++) 
      printf ("*");
    printf ("\n");    
  }

  for (j = base - 1; j >= 0; j--) {
    for (i = 0; i < base - j; i++) 
      printf ("*");
    for (i = 0; i < 2 * j; i++) 
      printf (" ");
    for (i = 0; i < base - j; i++) 
      printf ("*");
    printf ("\n");    
  }
}

