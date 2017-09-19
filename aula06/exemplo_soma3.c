#include <stdio.h>
void inc(int *x) {
  printf("%d\n", *x);
  (*x)++;
  printf("%d\n", *x);
}
int main(void) {
  int x = 7;
  inc(&x);
  printf("%d\n", x); // imprime 8
}
