#include <stdio.h>
int main(void) {
  int A = 27;
  int B = 4;
  int q = 0;
  int r = 0;
  while (A >= B) {
    A = A - B;
    q += 1;
  }
  r = A;
  printf("quociente %d; resto %d\n", q, r);
  return 0;
}
