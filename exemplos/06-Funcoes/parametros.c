#include <stdio.h>

int soma(int x, int y) {
  x += 1;
  y += 1;
  return x + y;
}

int main(void) {
  int a, b;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  printf("Digite o valor de b: ");
  scanf("%d", &b);

  printf("Soma de a e b: %d\n", a + b);
  printf("Soma de x e y: %d\n", soma(a, b));
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  return 0;
}
