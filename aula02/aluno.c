#include <stdio.h>
int main(void) {
  float nota = 91;
  float freq = 0.2;

  int tem_nota = nota > 60;
  int tem_freq = freq > 0.75;
  int foi_reprovado = !tem_nota || !tem_freq;
  if (foi_reprovado) {
    printf("Faça aeds1 novamente\n");
  }
}
