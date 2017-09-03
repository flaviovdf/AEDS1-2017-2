#include <stdio.h>
int main(void) {
  int valor;
  do {
    scanf("%d", &valor);
    printf("%d\n", valor);
  } while(valor >= 0 && valor <= 10);
  return 0;
}
