#include <stdio.h>

int main () {
  
  char texto[50];
  int cont=0;	

  /* Interrompe a leitura no primeiro espaço em branco */
  scanf ("%s", texto);
  printf ("%s\n", texto);

  while(texto[cont] != '\0')
  	cont++;

  printf("Tamanho da string: %d", cont);

  return (0);
}
