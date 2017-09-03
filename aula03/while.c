#include <stdio.h>
int main() {
  int A = 27;
  int B = 4;
  int q = 0;
  int r = 0;
  while (A >= B) {
    // A = A - B;
    A -= B;
    q += 1;
  }
  r = A;
  return 0;
}
