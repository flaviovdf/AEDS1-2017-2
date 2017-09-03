/*
 * Lê e escreve uma cadeia de caracteres.
 * O que pode acontecer se o usuário digitar uma cadeia muito grande?
 */
#include <stdio.h>

main() {
  char str[30];
  int i;

  printf("Digite uma cadeia de caracteres: ");
  scanf("%s", str);

  /* Equivalente a printf("%s\n", str) */
  for (i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
}
