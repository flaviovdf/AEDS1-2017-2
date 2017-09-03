#include <stdio.h>
#include <string.h>

int main () {
  
  char feliz[50] = "Eu sou um texto feliz.";
  char triste[50] = "Eu sou um texto triste.";
  char indeciso[50] = "";

  printf ("Comprimento do texto feliz: %d\n", (int) strlen(feliz));
  printf ("Comprimento do texto triste: %d\n", (int) strlen(triste));

  printf ("Valor de indeciso antes de qualquer operação:\n");
  puts(indeciso);

  strcpy (indeciso, feliz);

  printf ("Valor de indeciso depois da cópia:\n");
  puts(indeciso);

  strcat (indeciso, triste);

  printf ("Valor de indeciso depois da concatenação:\n");
  puts(indeciso);

  return (0);
}
