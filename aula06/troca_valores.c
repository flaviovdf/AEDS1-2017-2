#include <stdio.h>
void troca_valores(int *x, int *y) {
  printf("endereço de x, y troca: %p %p\n",
         x, y);
  int aux = 0;
  aux = *x;
  *x = *y;
  *y = aux;
}
int main(void) {
  int x = 7;
  int y = 10;
  printf("endereço de x, y main: %p %p\n",
         &x, &y);
  printf("%d %d\n", x, y);
  troca_valores(&x, &y);
  printf("%d %d\n", x, y);
  return 0;
}
