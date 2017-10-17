#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  int *p;

  for (i = 0; i < 100; i++) {
    p = (int *) malloc(100 * sizeof(int));
    printf("endereço alocado = 0x%x\n", (unsigned int) p);
    free(p);
  }

  return 0;
}
