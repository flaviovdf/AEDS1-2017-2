#include<stdio.h>

int main(void) {
  unsigned int a;
  
  printf("RA: ");
  scanf("%d", &a);  
  
  switch(a) {
  case 10129: 
  case 33860:
  case 33967:
  case 33485:
  case 960231:
    printf("O aluno está matriculado em MC102.\n");
  }
}
