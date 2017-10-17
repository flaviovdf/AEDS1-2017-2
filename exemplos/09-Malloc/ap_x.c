#include <stdio.h>

int main(void) {
  int x = 100;
  int *ap_x = &x;

  printf("Valor de x = %d\n", x);
  printf("Endereço de x = 0x%x\n", (unsigned int) &x);
  printf("Endereço de x = 0x%x\n", (unsigned int) ap_x);

  return 0;
}
