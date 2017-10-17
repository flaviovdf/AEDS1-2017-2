#include <stdio.h>

struct ponto {
  double x;
  double y;
};

typedef struct ponto Ponto;

int main(void) {
  Ponto p;
  Ponto *ap_p;

  p.x = 5.0;
  p.y = 3.0;

  ap_p = &p;

  printf("p.x = %.3lf\n", ap_p->x);
  printf("p.y = %.3lf\n", ap_p->y);

  return 0;
}
