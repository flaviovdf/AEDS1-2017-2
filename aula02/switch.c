#include <stdio.h>
int main(void) {
  char operacao;
  int valor1;
  int valor2;

  printf("Digite um operador e dois operandos\n");
  scanf("%c", &operacao);
  scanf("%d", &valor1);
  scanf("%d", &valor2);

  int resposta;
  switch(operacao) {
    case '+':
    resposta = valor1 + valor2;
    break;
    case '-':
    resposta = valor1 - valor2;
    break;
    default:
    printf("Operador invalido");
    break;
  }

  return 0;
}
