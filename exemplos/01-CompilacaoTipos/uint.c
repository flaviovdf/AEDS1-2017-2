#include <stdio.h>
int main(void) {
  unsigned int variavel;
  variavel = 2147483647;
  printf ("%u\n", variavel);
  variavel = variavel + 1;
  printf ("%u\n", variavel);
}
