#include <stdio.h>
main(){
  int n;
  printf("Digite um número: ");
  scanf("%d", n);  /* Erro. Falta o & (address-of) */
  printf("O valor digitado foi %d\n",n);
}
