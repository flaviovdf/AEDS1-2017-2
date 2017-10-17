#include <stdio.h>
#include <stdlib.h>

/* Não rode este programa. Ele pode travar a sua máquina... */

int main(void) {
  char *p;

  while ((p = malloc(100)) != NULL);

  printf("Memória esgotada.\n");

  return 0;
}
