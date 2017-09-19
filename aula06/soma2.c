#include <stdio.h>
int x = 9;
int y = 1;
int soma_xy(int x, int y) {
  return x+y;
}
int soma_xy2(int y) {
  x += y;
  return x;
}
int soma_xy3() {
  return x+y;
}
int main(void) {
  printf("1: - %d\n", soma_xy(10, 2));
  printf("2: - %d\n", soma_xy(x, y));
  printf("3: - %d\n", soma_xy2(20));
  printf("4: - %d\n", soma_xy3());
}
