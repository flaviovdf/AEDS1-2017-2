#include <stdio.h>
int main(void) {
  int n = 20, m = 10;
  printf("O endereço de n é 0x%p\n", &n);
  printf("O valor de n é %d\n", n);

  printf("O endereço de m é 0x%p\n", &m);
  printf("O valor de m é %d\n", m);
  return 0;
}
