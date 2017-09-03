#include <stdio.h>

main() {
  int n;
  int impar;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n);

  impar = 1;
  
  while (n > 0) {
    printf("%d\n", impar);
    impar += 2;
    n--;
  }
  
}
