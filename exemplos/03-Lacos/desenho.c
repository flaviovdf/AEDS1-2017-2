/*
   Exibe desenhos do tipo:

   *****
   ****
   ***
   **
   *
   
   Base é o número de asterisco da maior linha.
*/

#include <stdio.h>

int main(void) {

  int i, j, base;

  printf("Base: ");
  scanf("%d", &base);

  j = 0;
  while (j < base) {
    i = 0;
    while (i < base - j) {
      printf ("*");
      i++;
    }
    printf ("\n");    
    j++;
  }

}

