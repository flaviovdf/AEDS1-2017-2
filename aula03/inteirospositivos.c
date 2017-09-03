#include <stdio.h>
int main() {
  int a = 2;
  int b = 3;
  int c = b + a++;
  printf("%d + %d  = %d\n", a, b, c);


  // int i = 1;
  // while (i <= 100) {
  //   printf("%d\n", i++);
  // }
  return 0;
}
