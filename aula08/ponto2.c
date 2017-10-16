#include <stdio.h>

struct ponto {
  int x;
  int y;
};
struct quadrado {
  struct ponto p;
  int lado;
};

struct ponto translate(struct ponto p,
                       int a,
                       int b) {
  struct ponto novo;
  novo.x = p.x + a;
  novo.y = p.y + b;
  return novo;
}
int main(void) {
  int a = 72;
  int b = 98;
  struct ponto p;
  p.x = 1;
  p.y = 2;
  struct ponto t = translate(p, a, b);
  printf("A translacao resultou em %d %d\n", t.x, t.y);
}
