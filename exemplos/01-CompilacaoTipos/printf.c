#include <stdio.h>

int main(void){
  printf("O programa A imprime o número 2\n");
  printf("O programa %c imprime o número 2\n",'A');
  printf("O programa A imprime o número %d\n",2);
  printf("O programa %c imprime o número %d\n",'A',2);
  printf("O programa %c %s %d\n",'A',"imprime o número",2);
  return 0;
}
