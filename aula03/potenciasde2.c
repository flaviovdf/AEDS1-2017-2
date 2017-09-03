#include <stdio.h>
#include <math.h>
int main(void) {
  int i = 1;
  int nPotencias = 10;
  int potencia = 1;
  // equivalente a potencia = pow(2, 10);
  while(i <= nPotencias) {
    printf("%d\n", potencia);
    potencia *= 2;
    i++;
  }
  return 0;
}
