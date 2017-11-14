#include <stdio.h>


double pot(double x, int n) {
  double res = 1;
  int i;
  
  if (n < 0)
    for (i = 1; i <= -n; i++)
      res *= 1/x;
  else 
    for (i = 1; i <= n; i++)
      res *= x;    
  return res;
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
