typedef struct {
  double x;
  double y;
} ponto_t;

int main(void) {
  ponto_t ponto;
  ponto_t *ponto_ptr = &ponto;
  ponto_ptr->x = 20;   // equivalente a ponto.x. -> é um "atalho"
  ponto_ptr->y = 99;   // equivalente a ponto.y. -> é um "atalho"
  ponto.x = 99;
  (*ponto_ptr).y = 72;
  // *ponto_ptr.y = 92; //  não compila, precedência.
  return 0;
}
