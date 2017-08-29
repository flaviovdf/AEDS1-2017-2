#include <stdio.h>

int main () {
  
  char texto[10];

  /* Interrompe a leitura ao encontrar um \n ou após 10 caracteres */
  scanf("%10[^\n]",texto);
  printf ("%s\n", texto);
  

  return (0);
}
