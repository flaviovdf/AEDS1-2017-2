#include <stdio.h>

main() {
  int n_impares;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n_impares);
  
  while (n_impares > 0) {
    printf("%d\n", 2 * n_impares - 1);
    n_impares--;
  }
  
}
