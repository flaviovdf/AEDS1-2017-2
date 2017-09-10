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

  if (a == 0) {
    printf ("Raiz: %f\n", -c/b);
  } else {
      delta = b * b - 4 * a * c;
      if (delta > 0) {
	printf ("Raiz 1: %.2f\n", (-b + sqrt(delta))/(2 * a));
	printf ("Raiz 2: %.2f\n", (-b - sqrt(delta))/(2 * a));
      }
      else
	if (delta == 0)
	  printf ("Raiz: %.2f\n", (-b)/(2 * a));
	else
	  printf ("Não existem raízes reais\n");
  }

}
