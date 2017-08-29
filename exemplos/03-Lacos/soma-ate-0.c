#include <stdio.h>

main() {
  int n;
  int soma, parcela;
  
  soma = 0;

  printf("número a ser somado (0 para sair): ");
  scanf("%d", &parcela);

  while (parcela != 0) {
    soma += parcela;
    printf("número a ser somado (0 para sair): ");
    scanf("%d", &parcela);
  }

  printf("Soma: %d\n", soma);  
}
