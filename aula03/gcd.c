#include <stdio.h>
int main(void) {
  int v1;
  int v2;
  printf("Digite dois valores: ");
  scanf("%d %d", &v1, &v2);

  // Vamos garantir que v1 > v2 sempre
  int aux;
  if (v2 > v1) {
    aux = v2;
    v2 = v1;
    v1 = aux;
  }

  int i = 1;
  int r = 0;
  while (i <= v1) { // v1 é o maior número
    if ((v1 % i == 0) && (v2 % i == 0))
      r = i;
    i++;
  }
  printf("O mdc entre %d e %d foi %d\n", v1, v2, r);
  return 0;
}
