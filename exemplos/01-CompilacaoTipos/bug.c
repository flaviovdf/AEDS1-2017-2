#include <stdio.h>
int main(void) {
  int n;
  printf("Digite um número: ");
  scanf("%d", n);  /* Erro. Falta o & (address-of) */
  printf("O valor digitado foi %d\n", n);
  return 0;
}
