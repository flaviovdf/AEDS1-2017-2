#include <stdio.h>

struct ficha {
  int ra;
  float media;
};

int main(void) {

  struct ficha f, g;

  printf("Digite o RA do aluno: ");
  scanf("%d", &f.ra);

  printf("Digite a média do aluno: ");
  scanf("%f", &f.media);

  g = f;

  printf("O aluno %d tirou média %f\n",
	       g.ra, g.media);

  return 0;
}
