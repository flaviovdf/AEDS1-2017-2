#include <stdio.h>

int main(void) {
  int n;
  int impar;
  int i;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n);

  impar = 1;
  i = 0;
  while (i < n) {
    printf("%d\n", impar);
    impar += 2;
    i++;
  }
  
}
