#include <stdio.h>
int main(void) {
  int valor1;
  printf("Digite um valor: ");
  scanf("%d", &valor1);
  // vou testar se o resto é maior do que 0
  int resto_por_2 = valor1 % 2;
  int resto_por_3 = valor1 % 3;
  if (resto_por_2 == 0) {
    if (resto_por_3 == 0) {
      printf("O satisfaz as condicoes\n");
    } else {
      printf("O numero nao satisfaz\n");
    }
  } else {
    printf("O numero nao satisfaz\n");
  }
}
