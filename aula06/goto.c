#include <stdio.h>
int main(void) {
  goto a;
  int x = 10;
  int y = 29;
  a: printf("%d %d\n", x, y);
}
