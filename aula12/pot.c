#include <stdio.h>

int pot(int n, int p) {
  if (p == 0) return 1;
  return n * pot(n, p-1);
}

int main(void) {
  printf("%d\n", pot(2, 3));
  return 0;
}
