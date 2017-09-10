#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c;
  float delta;

  printf("a: ");
  scanf ("%f", &a);
  printf("b: ");
  scanf ("%f", &b);
  printf("c: ");
  scanf ("%f", &c); 


  /* Completar */
  
  delta = b * b - 4 * a * c;
  
  printf ("Raiz: %f\n", -c/b);  
  printf ("Raiz: %f\n",(-b)/(2 * a));
  printf ("Raiz 1: %f\n", (-b + sqrt(delta))/(2 * a));
  printf ("Raiz 2: %f\n", (-b - sqrt(delta))/(2 * a));
  printf ("Não existem raízes reais\n");  

}
