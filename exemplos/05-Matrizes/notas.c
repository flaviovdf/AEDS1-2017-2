#include <stdio.h>

main() {
  float nota[100], media;
  int n, i;

  printf("Número de alunos: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Nota do aluno %d: ", i+1);
    scanf("%f", &nota[i]);
  }

  media = 0;
  for (i = 0; i < n; i++) 
    media += nota[i];

  media /= n;
 
  printf("Nota média = %.1f\n", media);

}
