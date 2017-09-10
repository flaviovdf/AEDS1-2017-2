#include <stdio.h>

main() {
  int x, y;

  scanf("%d %d", &x, &y);
  
  int mat[x][y];

  mat[0][0] = 1;

  printf ("&x   = 0x%x\n", &x);
  printf ("&y   = 0x%x\n", &y);
  printf ("&mat = 0x%x\n", mat);  
}
