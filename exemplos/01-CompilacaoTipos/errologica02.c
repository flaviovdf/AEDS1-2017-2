#include <stdio.h>
int main(void) {
  int A = 27;
  int B = 4;
  int q = 0;
  int auxiliar = A;
  while (auxiliar >= B) {
    auxiliar = auxiliar - B;
    q += 1;
  }
  int r = auxiliar;
  printf("Ao dividir %d por %d ", A, B);
  printf("o quociente e igual a %d. ", q);
  printf("O resto e igual a %d", r);
  return 0;
}
