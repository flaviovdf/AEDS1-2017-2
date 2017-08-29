/*
 * Programa para ilustrar que o ambiente de execução não testa
 * se um dado acesso está dentro dos limites de um vetor.
 */

#include <stdio.h>

main () {
  char asteriscos[16], cifroes[16], arrobas[16];
  int i;

  printf("Endereço de arrobas    0x%x (%u)\n", arrobas, arrobas);
  printf("Endereço de cifrões    0x%x (%u)\n", cifroes, cifroes);  
  printf("Endereço de asteriscos 0x%x (%u)\n", asteriscos, asteriscos);

  for (i = 0; i < 16; i++) {
    asteriscos[i] = '*';
    cifroes[i]    = '$';
    arrobas[i]    = '@';
  }
  
  for (i = 0; i < 16; i++) 
    printf("%c", asteriscos[i]);
  printf ("\n");
  for (i = 0; i < 16; i++) 
    printf("%c", cifroes[i]);
  printf ("\n");
  for (i = 0; i < 16; i++) 
    printf("%c", arrobas[i]);
  printf("\n");
  
  for (i = 0; i < 40; i++) 
    arrobas[i] = '@';

  for (i = 0; i < 16; i++) 
    printf("%c", asteriscos[i]);
  printf ("\n");
  for (i = 0; i < 16; i++) 
    printf("%c", cifroes[i]);
  printf ("\n");
  for (i = 0; i < 16; i++) 
    printf("%c", arrobas[i]);
  printf("\n");
    
}
