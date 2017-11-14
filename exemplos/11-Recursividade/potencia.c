#include <stdio.h>


double pot(double x, int n) {
  if (n == 0)
    return 1;
  else
    if (n < 0)
      return 1/pot(x, -n);
    else 
      return x*pot(x, n-1);
}

int main() {
  double x;
  int n;
  
  printf("Digite x: ");
  scanf("%lf", &x);
  printf("Digite n: ");
  scanf("%d", &n);  
  printf("%.2lf elevado a %d = %.2lf\n", x, n, pot(x,n));
  return 0;
}
