#include <stdio.h>
int main() {
  int A = 96;
  int B = 4;
  int q = 0;
  int r = 0;
  int x = A;
  while (A >= B) {
    A = A - B;
    q = q + 1;
  }
  r = A;
  printf("Ao dividir %d por %d\n", x, B);
  printf("o quociente e igual a %d.\n", q);
  printf("O resto e igual a %d\n", r);
  return 0;
}
