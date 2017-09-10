#include <stdio.h>

int main(void) {
  int a, b;
  int resultado;

  printf("Dividendo: ");
  scanf("%d", &a);
  printf("Divisor: ");
  scanf("%d", &b);

  resultado = 0;
  while (a >= b) {
    resultado++;
    a -= b;
  }

  printf("Resultado: %d\n", resultado);
}
