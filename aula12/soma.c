#include <stdio.h>

int soma(int n) {
  if (n <= 9) return n;
  int digito = n % 10;
  return digito + soma(n / 10);
}

int main(void) {
  printf("%d\n", soma(121319));
  return 0;
}
