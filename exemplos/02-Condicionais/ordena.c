#include<stdio.h>

int main(void) {
  int a, b, c;
  
  printf("Digite três números: ");
  scanf ("%d %d %d", &a, &b, &c);

  /* Completar */

  printf ("%d %d %d", a, b, c);
  printf ("%d %d %d", a, c, b);
  printf ("%d %d %d", b, a, c);
  printf ("%d %d %d", b, c, a);
  printf ("%d %d %d", c, a, b);
  printf ("%d %d %d", c, b, a);  

}
