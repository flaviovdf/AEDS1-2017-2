#include <stdio.h>

void verifica_primo(int n) {
  int i, v;

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
}

void verifica_par(int n) {
  if (n % 2 == 0) 
    printf("O número %d é par.\n", n);
  else
    printf("O número %d é ímpar.\n", n);
}

void verifica_quadrado_perfeito(int n) {
  int i, v;

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
}

void verifica_cubo_perfeito(int n) {
  int i, v;

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
}

int le_numero() {
  int numero;
  printf("n: ");
  scanf("%d", &numero);
  return numero;
}


int main() {  
  int n;
  int op;

  do {
    printf("1 - Número primo\n");
    printf("2 - Número par\n");
    printf("3 - Quadrado perfeito\n");
    printf("4 - Cubo perfeito\n");
    printf("5 - Todas as verificações\n");
    printf("6 - Sair\n");
    printf("Opção: ");

    scanf("%d", &op);

    switch (op) {
    case 1:
      n = le_numero();
      verifica_primo(n);
      break;
    case 2:
      n = le_numero();
      verifica_par(n);
      break;
    case 3:
      n = le_numero();
      verifica_quadrado_perfeito(n);
      break;
    case 4:
      n = le_numero();
      verifica_cubo_perfeito(n);
      break;
    case 5:
      n = le_numero();
      verifica_primo(n);
      verifica_par(n);
      verifica_quadrado_perfeito(n);
      verifica_cubo_perfeito(n);
      break; 
    default:
      printf("Opção inválida.\n");
    }
  } while (op != 6);

  return 0;
}
