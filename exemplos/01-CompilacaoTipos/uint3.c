#include <stdio.h>
int main(void) {
  unsigned int variavel;
  variavel = 0;
  variavel = variavel - 2000000000;
  printf ("%u\n", variavel);
  variavel = variavel * 2;
  printf ("%u\n", variavel);
}
