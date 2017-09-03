#include<stdio.h>

main () {
  int a, b, c;
  
  printf("Digite três números: ");
  scanf ("%d %d %d", &a, &b, &c);

  /* Completar */

  if (a <= b && a <= c)
    if (b <= c)
      printf ("%d %d %d\n", a, b, c);
    else
      printf ("%d %d %d\n", a, c, b);
  else
    if (b <= c)
      if (a <= c)
	printf ("%d %d %d\n", b, a, c);
      else
	printf ("%d %d %d\n", b, c, a);
    else
      if (a <= b)
	printf ("%d %d %d\n", c, a, b);
      else
	printf ("%d %d %d\n", c, b, a);  

}
