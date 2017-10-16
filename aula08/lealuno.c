#include <stdio.h>

struct aluno {
  char *nome;
  int  mat;
};

typedef double nota_t;

int main(void) {
  struct aluno quatro_alunos[4];
  scanf("%s", quatro_alunos[1].nome);
  scanf("%d", &quatro_alunos[1].mat);

  nota_t nota = 7.2;

  return 0;
}
