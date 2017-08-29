/*
 * Procura um elemento em uma cadeia de caracteres.
 */
#include <stdio.h>

main() {
  char str[30], c;
  int i;

  printf("Digite uma cadeia de caracteres: ");
  scanf("%s", str);
  printf("Digite um caracter: ");
  do {
    scanf("%c", &c);
  } while (c == ' ' || c == '\n');


  for (i = 0; str[i] != c && str[i] != '\0'; i++);

  if (str[i] == c)
    printf("O caracter %c está presente na string %s\n", c, str);
  else
    printf("O caracter %c não está presente na string %s\n", c, str);
}
