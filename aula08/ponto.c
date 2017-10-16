#include <stdio.h>

void translacao(int x, int y,
                int *novo_x, int *novo_y,
                int a, int b) {
  *novo_x = x + a;
  *novo_y = y + b;
}

int main(void) {
  int x = 2;
  int y = 3;
  int novo_x;
  int novo_y;
  translacao(x, y, &novo_x, &novo_y, 10, 2);
  return 0;
}
