#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *vetor = (int*) malloc(10 * sizeof(int)); // vetor é lixo
  for (int i = 0; i < 10; i++) vetor[i] = i*2;

  *vetor = 92;
  for (int i = 0; i < 10; i++) {
    printf("%d\n", *vetor);
    vetor++;
  }

  int *vetor_com_calloc = (int*) calloc(10, sizeof(int));
  free(vetor_com_calloc);
  //free(vetor);
}
