#include <stdio.h>

int main () {
  
  char texto[50];

  /* Interrompe a leitura ao encontrar um \n */
  scanf("%[^\n]",texto);
  printf ("%s\n", texto);
  
  return (0);
}
