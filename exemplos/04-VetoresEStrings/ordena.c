#include <stdio.h>
#include <string.h>

#define N_FLORES 5

void imprime_vetor(char *vet[], int n) {
  int i;

  for (i = 0; i < n-1; i++)
    printf("%13s, ", vet[i]);
  printf("%s\n", vet[n-1]); 
}

int main() {
  int i, j;
  char *vetor[] = {"rosa",
		    "cravo",
		    "margarida",
		    "violeta",
		    "amor-perfeito"};
  char *aux;

  imprime_vetor(vetor, N_FLORES);

  for(i = 1; i < N_FLORES; i++) {
    aux = vetor[i];
    for(j = i-1; (j >= 0) && strcmp(aux, vetor[j]) < 0; j--)
      vetor[j + 1] = vetor[j];
    vetor[j + 1] = aux;
    imprime_vetor(vetor, N_FLORES);
  }
  
  return 0;
}
