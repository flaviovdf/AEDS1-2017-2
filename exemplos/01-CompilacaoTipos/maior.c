#include <stdio.h>
int main(void) {
  int x, y;

  printf("x: ");
  scanf("%d", &x);
  printf("y: ");
  scanf("%d", &y);

  if (x > y)
    printf ("O maior número é x = %d\n", x);
  else
    printf ("O maior número é y = %d\n", y);

}
