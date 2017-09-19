/*
 * Reestruture este programa utilizando funções e
 * acrescente a opção "todas as verificações".
 */
#include <stdio.h>

int main() {  
  int i, n, v;
  int op;

  do {
    printf("1 - Número primo\n");
    printf("2 - Número par\n");
    printf("3 - Quadrado perfeito\n");
    printf("4 - Cubo perfeito\n");
    printf("5 - Sair\n");
    printf("Opção: ");

    scanf("%d", &op);

    switch (op) {
    case 1:
      printf("n: ");
      scanf("%d", &n);
      i = 2;
      v = 1;
      while (i <= n/2 && v == 1) {
	if (n % i == 0)
	  v = 0;
	i++;
      }
      if (v) 
	printf("O número %d é primo.\n", n);
      else
	printf("O número %d não é primo.\n", n);
      break;
    case 2:
      printf("n: ");
      scanf("%d", &n);
      if (n % 2 == 0) 
	printf("O número %d é par.\n", n);
      else
	printf("O número %d é ímpar.\n", n);
      break;
    case 3:
      printf("n: ");
      scanf("%d", &n);
      i = 1;
      v = 0;
      while (i <= n/2 && v == 0) {
	if (i * i == n)
	  v = 1;
	i++;
      }
      if (v) 
	printf("O número %d é um quadrado perfeito.\n", n);
      else
	printf("O número %d não é um quadrado perfeito.\n", n);
      break;
    case 4:
      printf("n: ");
      scanf("%d", &n);
      i = 1;
      v = 0;
      while (i <= n/2 && v == 0) {
	if (i * i * i == n)
	  v = 1;
	i++;
      }
      if (v) 
	printf("O número %d é um cubo perfeito.\n", n);
      else
	printf("O número %d não é um cubo perfeito.\n", n);
      break;
    case 5:
      break; 
    default:
      printf("Opção inválida.\n");
    }
  } while (op != 5);

  return 0;
}
