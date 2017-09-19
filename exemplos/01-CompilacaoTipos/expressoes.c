#include <stdio.h>

int main(void) {
  int a, b;

  a = 10;
  b = 5;

  printf ("a + b: %d\n", a + b);
  printf ("a - b: %d\n", a - b);
  printf ("a * b: %d\n", a * b);
  printf ("a / b: %d\n", a / b);
  printf ("a mod b: %d\n", a % b);

  /* Não existe a^b... */
  return 0;
}
