#include <stdio.h>

int main(void) {
  int a, b;

  a = 10;
  b = 0;

  printf("a / b: %d\n", a / b); /* Erro */
  printf("a mod b: %d\n", a % b);
  return 0;
}
