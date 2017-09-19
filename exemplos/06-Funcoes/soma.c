#include <stdio.h>

int soma(int a, int b) {
  return a + b;
}

int main(void) {
  int c, d;

  printf("Digite o valor de c: ");
  scanf("%d", &c);

  printf("Digite o valor de d: ");
  scanf("%d", &d);

  printf("Soma de c e d: %d\n", soma(c, d));
  printf("Soma de 5 e 10: %d\n", soma(5, 10));

  return 0;
}
