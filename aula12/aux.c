#include <stdio.h>

void f(int n) {
  n-=1;
}

int main(void) {
  int n = 9;
  f(n);
  n = 98;
  return 0;
}
