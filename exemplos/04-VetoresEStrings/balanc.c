/*
 * Balanceamento de parênteses.
 */
#include <stdio.h>

main() {
  char str[30];
  int i, cont;

  printf("Digite uma cadeia com parênteses: ");
  scanf("%s", str);

  for (i = 0, cont = 0; str[i] != '\0' && cont >= 0; i++)
    if (str[i] == '(')
      cont++;
    else
      cont--;

  if (cont == 0)
    printf("A cadeia está balanceada.\n");
  else
    printf("A cadeia não está balanceada.\n");
}
