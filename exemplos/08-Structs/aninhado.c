#include <stdio.h>

struct medias {
  float p1;
  float p2;
  float p3;
};

typedef struct medias Medias;

struct ficha {
  int ra;
  Medias provas;
};

int main(void) {

  struct ficha f;

  printf("Digite o RA do aluno: ");
  scanf("%d", &f.ra);

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &f.provas.p1);

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &f.provas.p2);

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &f.provas.p3);

  printf("O aluno %d tirou média %f\n",
	       f.ra, (f.provas.p1 + f.provas.p2 + f.provas.p3) / 3);

}
