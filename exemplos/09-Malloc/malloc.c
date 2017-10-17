#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p;
  int i;

  p = (int *) malloc(100 * sizeof(int));

  for (i = 0; i < 100; i++)
    p[i] = i;

  return 0;
}
