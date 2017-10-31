#include <stdio.h>
#include <stdlib.h>

typedef struct digito {
  int valor;                // entre 0 e 9
  struct digito *prox;
  struct digito *anterior;
} digito_t;

typedef struct {
  digito_t *maior_digito;
  digito_t *menor_digito;
} bignum_t;

digito_t *cria_novo_digito() {
  digito_t *novo = (digito_t *) malloc(sizeof(digito_t));
  if (novo == NULL) {
    printf("Out of memory!\n");
    exit(1);
  }
  novo->valor = 0;
  novo->prox = NULL;
  novo->anterior = NULL;
  return novo;
}

void incrementa(bignum_t *x) {
  digito_t *digito_atual = x->menor_digito;
  while (1) {
    if (digito_atual->valor < 9) {
      digito_atual->valor += 1;
      break;
    }
    if (digito_atual->prox == NULL) {
      digito_atual->prox = cria_novo_digito();
      digito_atual->prox->anterior = digito_atual;
      x->maior_digito = digito_atual->prox;
    }
    digito_atual->valor = 0;
    digito_atual = digito_atual->prox;
  }
}

void libera(bignum_t *big) {
  digito_t *para_liberar = big->maior_digito;
  digito_t *anterior = para_liberar->anterior;
  while (para_liberar != NULL) {
    anterior = para_liberar->anterior;
    free(para_liberar);
    para_liberar = anterior;
  }
  free(big);
}

void imprime_big(bignum_t *big) {
  digito_t *dig = big->maior_digito;
  while (dig != NULL) {
    printf("%d", dig->valor);
    dig = dig->anterior;
  }
}

int main(void) {
  bignum_t *big = (bignum_t *) malloc(sizeof(bignum_t));
  if (big == NULL) {
    printf("Out of memory!\n");
    exit(1);
  }
  digito_t *digito = cria_novo_digito();
  big->maior_digito = digito;
  big->menor_digito = digito;

  for (int contador = 1; contador <= 27; contador++) {
    incrementa(big);
  }

  imprime_big(big);
  libera(big);
  return 0;
}
