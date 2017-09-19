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

  j = 0;
  while (j < base) {
    i = 0;
    while (i < base - j) {
      printf ("*");
      i++;
    }
    i = 0;
    while(i < 2 * j) {
      printf (" ");
      i++;
    }
    i = 0;
    while(i < base - j) {
      printf ("*");
      i++;
    }
    printf ("\n");    
    j++;
  }

  j = 0;
  while (j < base) {
    i = 0;
    while (i <= j) {
      printf ("*");
      i++;
    }
    i = 0;
    while(i < 2* (base - j - 1)) {
      printf (" ");
      i++;
    }
    i = 0;
    while(i <= j) {
      printf ("*");
      i++;
    }    
    printf ("\n");    
    j++;    
  }

}

