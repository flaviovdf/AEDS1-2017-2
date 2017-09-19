#include <stdio.h>

int global;

void imprime_global () {
  printf ("%d\n", global);
}

void le_global () {
  printf ("Digite o valor da variável global: ");
  scanf ("%d", &global);
}

int main () {
  global = 0;
  le_global();
  imprime_global();
  printf ("%d\n", global);
  return 0;
}
