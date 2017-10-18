#include <stdio.h>
#include <stdlib.h>

int *cria_vetor(int n) {
  int *vetor = (int*) malloc(n * sizeof(int));
  return vetor;
}

int main(void) {
  int n = 5;
  int *vetor_novo = cria_vetor(n);
  for (int i = 0; i < n; i++)
    vetor_novo[i] = i*2;
  free(vetor_novo);
}
