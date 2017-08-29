#include <stdio.h>

main() {
  int i, n, fat;

  printf("Entre com um número inteiro positivo: ");
  scanf("%d", &n);

  fat = 1;
  for (i = 1; i <= n; i++) {
    fat *= i;
    printf("O fatorial de %d é igual a %d\n", i, fat);
  }
}
