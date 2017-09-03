#include <stdio.h>

main(void)
{ /* Início do bloco de comandos */
  int a, b;
  a = 1;
  b = a;
  { /* Início do sub-bloco de comandos */
    int b;
    b = a + 1;
    printf("%d %d\n", a, b);
  } /* Fim do sub-bloco de comandos */
  printf("%d %d\n", a, b);
} /* Fim do sub-bloco de comandos */
