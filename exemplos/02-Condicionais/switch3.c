#include<stdio.h>

main() {
  unsigned int a;

  printf("RA: ");
  scanf("%d", &a);    
  switch(a) {
  case 10129:
    printf("O aluno entrou na UNICAMP em 2001.\n");
    break;
  case 33860:
  case 33967:
  case 33485:
    printf("O aluno entrou na UNICAMP em 2003.\n");
    break;
  case 960231:
    printf("O aluno entrou na UNICAMP em 1996.\n");
    break;
  }
}
