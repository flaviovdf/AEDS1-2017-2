#include <stdio.h>

main() {
  int n;
  int soma, parcela;
  
  printf("Quantos números? ");
  scanf("%d", &n);

  soma = 0;
  
  while (n > 0) {
    printf("número a ser somado: ");
    scanf("%d", &parcela);
    soma += parcela;
    n--;
  }
  printf("Soma: %d\n", soma);  
}
