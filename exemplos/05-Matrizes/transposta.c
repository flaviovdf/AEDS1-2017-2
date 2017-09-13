#include <stdio.h>
#define LIM 4

int main(void){
  
  int mat[LIM][LIM];
  int i = 0,j = 0,k = 0;

  for (i = 0; i < LIM; i++) 
    for (j = 0; j < LIM; j++){ 
      printf("Digite o valor da posicao (%d,%d): ", i, j);
      scanf("%d",&mat[i][j]);
    }

  printf("Matriz\n");
  for (i = 0; i < LIM; i++){ 
    for (j = 0; j < LIM; j++) 
      printf("%d ", mat[i][j]);
    printf("\n");
  }

  printf("Transposta\n");
  for (i = 0; i < LIM; i++){ 
    for (j = 0; j < LIM; j++) 
      printf("%d ", mat[j][i]);
    printf("\n");
  }
}
