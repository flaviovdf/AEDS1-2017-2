/*
 * Exemplos de expressões da operação de negação
 */
#include <stdio.h>

main() {

  printf ("!0  vale %d\n",!0);
  printf ("!1  vale %d\n",!1);
  printf ("!5  vale %d\n",!5);

  printf ("!(!5)  vale %d\n",!!5);
  
  printf ("!(1 || 1) vale %d\n",!(1 || 1));
}
  
