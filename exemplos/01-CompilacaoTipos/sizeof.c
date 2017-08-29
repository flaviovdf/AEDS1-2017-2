#include <stdio.h>
int main(void) {
  int    variavel_int;
  long   variavel_long;
  float  variavel_float;
  double variavel_double;

  char variavel_char;

  printf("Size of int:    %lu\n", sizeof(variavel_int));
  printf("Size of long:   %lu\n", sizeof(variavel_long));
  printf("Size of float:  %lu\n", sizeof(variavel_float));
  printf("Size of double: %lu\n", sizeof(variavel_double));
  printf("Size of char:   %lu\n", sizeof(variavel_char));
  return 0;
}
