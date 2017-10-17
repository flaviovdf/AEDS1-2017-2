#include <stdio.h>

int y = 200;

int main(void) {
  int x = 100;
  printf("Valor de x = %d\n", x);
  printf("Endereço de x = 0x%x\n", (unsigned int) &x);

  printf("Valor de y = %d\n", y);
  printf("Endereço de y = 0x%x\n", (unsigned int) &y);

  return 0;
}
