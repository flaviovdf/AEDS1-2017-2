#include <stdio.h>
int main(void) {
  float a, b, c;

  printf("a: ");
  scanf ("%f", &a);
  printf("b: ");  
  scanf ("%f", &b);
  printf("c: ");  
  scanf ("%f", &c);

  if ((a > b + c) || (b > a + c) || (c > a + b)) {
    /*Não existe triângulo*/
    printf("Nao é possível formar um triângulo\n");
  } else {
    if (a == b && b == c) {
      printf ("O triângulo é equilátero\n");
    } else if ((a == b) || (a == c) || (b == c)) {
      printf ("O triângulo é isóceles\n");      
    } else {
      printf ("O triângulo é escaleno\n");
    }
  }
}
