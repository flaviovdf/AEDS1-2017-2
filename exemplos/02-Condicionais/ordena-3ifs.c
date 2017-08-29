#include<stdio.h>

main () {
  int maior, medio, menor;
  
  int temporario;

  /*Lendo os valores supondo que eles estejam ordenados*/

  printf("Digite três números: ");
  scanf ("%d", &maior);
  scanf ("%d", &medio);
  scanf ("%d", &menor);
  
  /*Procurando o maior número - duas comparações*/

  if (medio > maior) {
    temporario = maior;
    maior = medio;
    medio = temporario;
  }

  if (menor > maior) {
    temporario = maior;
    maior = menor;
    menor = temporario;
  }

  /*Procurando o segundo maior número - uma comparação*/

  if (menor > medio) {
    temporario = medio;
    medio = menor;
    menor = temporario;
  }

  printf ("Maior: %d\n", maior);
  printf ("Médio: %d\n", medio);
  printf ("Menor: %d\n", menor);

}
