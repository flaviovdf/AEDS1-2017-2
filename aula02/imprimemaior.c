#include <stdio.h>
int main(void) {
  int valor1;
  printf("Digite um valor: ");
  scanf("%d", &valor1);

  int valor2;
  printf("Digite outro valor: ");
  scanf("%d", &valor2);

  int v1MaiorQueV2 = valor1 >= valor2;
  printf("O resultado do teste foi %d\n",
         v1MaiorQueV2);

  if (v1MaiorQueV2) {
    printf("v1 eh maior ou igual a v2\n");
  } else {
    printf("v1 eh menor do que v2\n");
  }

}
