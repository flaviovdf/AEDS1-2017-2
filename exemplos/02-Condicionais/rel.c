/*
 * Exemplos de expressões relacionais
 */
#include <stdio.h>

int main(void) {

  printf ("(5 == 3) vale %d\n", (5 == 3));
  printf ("(5 != 3) vale %d\n", (5 != 3));

  printf ("(1 == 1) vale %d\n", (1 == 1));
  printf ("(3 == 3) vale %d\n", (3 == 3));

  printf ("(1 == 1 == 1) vale %d\n", (1 == 1 == 1));
  printf ("(3 == 3 == 3) vale %d\n", (3 == 3 == 3));

  printf ("(3 == 3 == 1) vale %d\n", (3 == 3 == 1));

  printf ("(3 == 5 == 0) vale %d\n", (3 == 5 == 0));  

  if (3 == 5 == 0 == 1)
    printf("Esta expressão esquisita é verdadeira!\n");
}
  
