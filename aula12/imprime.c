#include <stdio.h>

void imprime(int n) {
  if (n <= 9) {
    printf("%d\n", n);
  } else {
    printf("%d\n", n);
    imprime(n / 10);
    printf("%d\n", n);
  }
}

int main(void) {
  imprime(98278);
  return 0;
}
