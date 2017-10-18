#include <stdio.h>

void cria_vetor(int *vetor, int n) {
  vetor[0] = 2;
  vetor[1] = 3;
}

int main(void) {
  int n = 100;
  int vetor[n];
  cria_vetor(vetor, n);
  return 0;
}
