#include <stdio.h>

main() {
  int numero1, numero2; 
  int x, y, r;

  printf("numero1 = ");
  scanf("%d", &numero1);

  printf("numero2 = ");
  scanf("%d", &numero2);

  if (numero1 >= numero2) {
    x = numero1;
    y = numero2;
  } else {
    x = numero2;
    y = numero1;
  }

  printf ("|  x  |  y  |   r  |\n");
  
  do {
    r = x % y;
    printf ("|%5d|%5d|%5d |\n", x, y, r);    
    x = y;
    y = r;
  } while (r != 0);
  
  printf("MDC entre %d e %d = %d\n", numero1, numero2, x);  
}
