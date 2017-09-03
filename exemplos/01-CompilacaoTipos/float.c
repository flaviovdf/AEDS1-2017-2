#include <stdio.h>
int main(void) {
  float variavel;
  variavel = 1000.0;
  printf ("%f\n", variavel);
  variavel = variavel + 0.00000000000001;
  printf ("%f\n", variavel);
}
