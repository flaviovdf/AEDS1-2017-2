#include <stdio.h>

int tamanho (char cadeia[]) {
  int tam;
  for (tam = 0; cadeia[tam] != '\0'; tam++)
    ;
  return tam;
}

int main () {
  char t_um[50] = "Eu sou o texto um.";
  char t_dois[50] = "Eu sou o texto dois.";

  printf ("Comprimento do texto um: %d\n", tamanho(t_um));
  printf ("Comprimento do texto dois: %d\n", tamanho(t_dois));

  return 0;
}
