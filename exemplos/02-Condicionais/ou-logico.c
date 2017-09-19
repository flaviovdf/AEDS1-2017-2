/*
 * Exemplos de expressões da operação ou lógico
 */
#include <stdio.h>

int main(void) {

  printf ("(1 || 1) vale %d\n",(1 || 1));
  printf ("(1 || 0) vale %d\n",(1 || 0));
  printf ("(0 || 1) vale %d\n",(0 || 1));
  printf ("(0 || 0) vale %d\n",(0 || 0));  

  printf("(5 == 5 || 3 == 3) vale %d\n",(5 == 5 || 3 == 3));
  printf("(5 != 5 || 3 != 3) vale %d\n",(5 != 5 || 3 != 3));  
}
  
