#include <stdio.h>

main() {
  int selecao;

  printf("Prato 1 - Miojo\n");
  printf("Prato 2 - Ensopado\n");
  printf("Prato 3 - Pizza\n");
  printf("Prato 4 - Bife acebolado\n");
  printf("Prato 5 - Vitela\n");

  printf("Escolha a sua opção: ");
  scanf("%d", &selecao);
  switch (selecao) {
  case 1:
    printf("Macarrão instantâneo.\n");
    break;
  case 2:
    printf("Carne de segunda bem macia.\n");
    break;
  case 3:
    printf("O alimento universal.\n");
    break;
  case 4:
    printf("Para quem já está com saudades de casa.\n");
    break;
  case 5:
    printf("O famoso baby beef.\n");
    break;
  default:
    printf("Seleção inválida.\n");
  }
}
