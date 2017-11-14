#include <stdio.h>

/* Retorna o fatorial de n */

int fatorial(int n) {
  if (n == 0)
    return 1;
  else
    return n * fatorial (n-1);
}

int main() {
  int n, f;

  printf("Digite n: ");
  scanf("%d", &n);
  f = fatorial(n);
  printf("Resultado final = %d\n", f);
  return 0;
}
