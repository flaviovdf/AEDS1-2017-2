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
  printf("A nota do aluno 2 foi %d", vetor[1]);
  return 0;
}
