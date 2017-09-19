#include <stdio.h>

int x, y;

int soma(int x, int y) {
  x += 1;
  y -= 1;
  printf ("Soma de x e y: %d\n", x + y);
  return x + y;
}

int main(void) {
  printf("Digite o valor de x: ");
  scanf("%d", &x);

  printf("Digite o valor de y: ");
  scanf("%d", &y);

  printf("Soma de x e y: %d\n", soma(x, y));
  printf("x: %d\n", x);
  printf("y: %d\n", y);

  return 0;
}
