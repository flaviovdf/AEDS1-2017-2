#include <stdio.h>

int main(void) {
  int x;
  int *ap_x = &x;

  x = 100;
  printf("Valor de x = %d\n", *ap_x);

  *ap_x = 200;
  printf("Valor de x = %d\n", *ap_x);

  return 0;
}
