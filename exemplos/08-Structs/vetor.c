#include <stdio.h>
#define TAM 5

struct ficha {
  int ra;
  float media;
};

int main(void) {

  struct ficha f[TAM];
  int i;

  for(i = 0; i < TAM; i++) {
    printf("Digite o RA do %dº aluno: ", i + 1);
    scanf("%d", &f[i].ra);

    printf("Digite a média do %dº aluno: ", i + 1);
    scanf("%f", &f[i].media);
  }

  for(i = 0; i < TAM; i++) {
    printf("O aluno %d tirou média %f\n",
	    f[i].ra, f[i].media);
  }
}
