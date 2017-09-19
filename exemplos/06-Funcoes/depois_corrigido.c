#include <stdio.h>

int soma(int op1, int op2);

int main(void) {
  int a = 0, b = 5;
  printf ("%d\n", soma (a, b));
  return 0;
}

int soma(int op1, int op2) {
  return op1 + op2;
}
