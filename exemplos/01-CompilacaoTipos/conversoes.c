#include <stdio.h>

main() {
  int a;
  float b;

  a = 10;
  b = a;
  printf ("O valor de b é: %f\n", b);

  b = 10 / 3;
  printf ("Divisão inteira 10 / 3: %f\n", b);
  b = 10 / (float) 3;
  printf ("Divisão de ponto flutuante 10 / (float) 3: %f\n", b);
  b = 10 / 3.0;
  printf ("Divisão de ponto flutuante 10 / 3.0: %f\n", b);
}
