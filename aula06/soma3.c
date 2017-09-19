#include <stdio.h>
int x = 9;
int y = 1;
int soma_xy(int x, int y) {
  return x+y;
}
int soma_xy2(int y) {
  x = soma_xy(10, 2);
  x += y;
  return x;
}
int soma_xy3() {
  y = soma_xy2(20);
  return x+y;
}
int main(void) {
  printf("A saida foi: - %d\n", soma_xy3());
}
