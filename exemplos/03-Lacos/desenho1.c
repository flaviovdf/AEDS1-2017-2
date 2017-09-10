/*
   Exibe desenhos do tipo:

   *****
   ****
   ***
   **
   *
   
   Base é o número de asteriscos da maior linha.
*/

#include <stdio.h>

int main(void) {

  int i, j, base;

  printf("Base: ");
  scanf("%d", &base);

  for (j = 0; j < base; j++) {
    for (i = 0; i < base - j; i++)
      printf ("*");
    printf ("\n");    
  }

}

