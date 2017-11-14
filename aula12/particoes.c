#include <stdio.h>

int conta_particoes(int n, int m) {
  if (n < 0) return 0;
  if (n == 1) return 1;
  if (m == 1) return 1;
  return conta_particoes(n-m, m) +
         conta_particoes(n, m-1);
}

int main(void) {
  printf("%d\n", conta_particoes(6, 4));
  return 0;
}
