#include <stdio.h>

int main(void) {
  int i;
  int n;
  int impar;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n);

  for (i = 0, impar = 1; i < n; i++, impar += 2)
    printf("%d\n", impar);
  
}
