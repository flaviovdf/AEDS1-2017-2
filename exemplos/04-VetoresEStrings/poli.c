/*
 * Lê os coeficientes e imprime um polinômio de grau
 * máximo igual a 25. Escreve cuidadosamente os sinais de + e -
 * e não imprime termos nulos.  
 * Faltam algumas simplificações:
     - não escrever coeficientes iguais a 1.0 (ou -1.0)
     - escrever apenas x (e não x^1)
     - não escrever x^0
 */

#include <stdio.h>

main() {
  float coef[26];
  int grau, i;
  
  printf("Grau do polinômio (grau máximo = 25): ", &grau);
  scanf("%d", &grau);

  if (grau < 0 || grau > 25) {
    printf("Grau inválido\n");
    return 0;
  }
    
  for (i = grau; i >= 0; i--) {
    printf("coeficiente de x^%d: ", i);
    scanf("%f", &coef[i]);
  }

  printf("%.1fx^%d", coef[grau], grau);  
  for (i = grau - 1; i >= 0; i--) {
    if (coef[i] != 0) {
      if (coef[i] >= 0) {
	printf(" + %.1fx^%d", coef[i], i);
      } else {
	printf(" - %.1fx^%d", -coef[i], i);
      }
    }
  }
  printf("\n");
}
