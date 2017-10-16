#include <stdio.h>

enum M {jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};

int main(void) {
  enum M mes_aniversario;
  mes_aniversario = jun;
  printf("Seu mês de aniversário é %d\n", mes_aniversario);
  return 0;
}
