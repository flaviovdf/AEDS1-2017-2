#include <stdio.h>

struct ficha {
  int ra;
  float media;
};

int main(void) {
  struct ficha f;

  printf("Digite o RA do aluno: ");
  scanf("%d", &f.ra);

  printf("Digite a média do aluno: ");
  scanf("%f", &f.media);

  printf("O aluno %d tirou média %f\n",
	       f.ra, f.media);
  return 0;
}
