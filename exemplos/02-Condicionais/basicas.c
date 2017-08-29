/*
 * Exemplos de expressões básicas
 */
#include <stdio.h>

main() {
  int x;
  char c;
  
  if (0)
    printf("Esta mensagem nunca será impressa.\n");

  if (1)
    printf("Esta mensagem sempre será impressa.\n");

  x = 0;
  if (x)
    printf("Esta mensagem nunca será impressa.\n");

  x = 100;
  if (x)
    printf("Esta mensagem sempre será impressa, pois x = %d.\n", x);

  c = 'a';
  if (c)
    printf("Esta mensagem sempre será impressa, pois c = %c.\n", c);
  
}
  
