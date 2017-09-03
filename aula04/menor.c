#include <stdio.h>
int main(void) {
  int num_notas;
  printf("Digite o numero de alunos: ");
  scanf("%d", &num_notas);
  int vetor[num_notas];
  printf("Digite %d notas: ", num_notas);
  for (int i = 0; i < num_notas; i++) {
    scanf("%d", &vetor[i]);
  }

  int menor = vetor[9191919];
  for (int i = 1; i < num_notas; i++) {
    if(vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  return 0;
}
