#include <stdio.h>

main() {
  int n;
  int soma, parcela;
  
  soma = 0;

  do {
    printf("número a ser somado (0 para sair): ");
    scanf("%d", &parcela);
    soma += parcela;
  } while (parcela != 0);

  printf("Soma: %d\n", soma);  
}
