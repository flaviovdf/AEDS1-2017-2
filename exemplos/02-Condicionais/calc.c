#include<stdio.h>

main() {
  char opr;
  float a, b, res;

  printf("a <opr> b: ");
  scanf("%f %c %f", &a, &opr, &b);
  
  switch(opr) {
  case '+':
    res = a + b;
    break;
  case '-':
    res = a - b;
    break;
  case '*':
    res = a * b;
    break;
  case '/':
    res = a / b;
    break;
  }
  printf("Resultado: %.2f\n", res);
}
