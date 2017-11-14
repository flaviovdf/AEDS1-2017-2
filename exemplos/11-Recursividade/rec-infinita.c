#include <stdio.h>

void rec_infinita(int n) {
  if (n % 10000 == 0)
    printf("n = %d\n", n);
  rec_infinita(n+1);
}

int main() {
  rec_infinita(0);
  return 0;
}
