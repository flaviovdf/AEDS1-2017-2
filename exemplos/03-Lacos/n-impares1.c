#include <stdio.h>

int main(void) {
  int n;
  int impar;
  int i;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n);

  impar = 1;
  for (i = 0; i < n; i++) {
    printf("%d\n", impar);
    impar += 2;
  }
  
}
