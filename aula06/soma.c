#include <stdio.h>
int x = 9;
int retorna20() {
  x = 20;
  return x;
}
int soma_tres(int x) {
  x = x + 3;
  return x;
}
int main(void) {
  printf("Somei 3 - %d\n", soma_tres(x));
  printf("Valor de x no main - %d\n", x);
  printf("Valor de x no main - %d\n", retorna20());
}
