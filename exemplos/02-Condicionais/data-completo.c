#include <stdio.h>

int main(void) {
  int dia_a, mes_a, ano_a;
  int dia_b, mes_b, ano_b;

  printf("Primeira data (dd/mm/aaaa): ");
  scanf ("%d/%d/%d", &dia_a, &mes_a, &ano_a);

  printf("Segunda data (dd/mm/aaaa): ");
  scanf ("%d/%d/%d", &dia_b, &mes_b, &ano_b);

  if (ano_a == ano_b && mes_a == mes_b && dia_a == dia_b)
    printf("As duas datas são iguais.\n");
  else
    if (ano_a < ano_b ||
	(ano_a == ano_b && mes_a < mes_b) ||
	(ano_a == ano_b && mes_a == mes_b && dia_a < dia_b))
      printf("A primeira data ocorreu antes da segunda.\n");
    else
      printf("A segunda data ocorreu antes da primeira.\n");  
}
