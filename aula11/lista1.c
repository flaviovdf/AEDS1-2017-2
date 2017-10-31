#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no {
  int valor;
  struct no *prox;
} no_t;

typedef struct {
  no_t *primeiro;
  no_t *ultimo;
} lista_t;

void limpa(lista_t *lista) {
  no_t *to_free = lista->primeiro;
  no_t *to_visit = NULL;
  while (to_free != NULL) {
    to_visit = to_free->prox;
    free(to_free);
    to_free = to_visit;
  }
  free(lista);
}

int main(void) {
  lista_t *lista = (lista_t *) malloc(sizeof(lista_t));
  if (lista == NULL) { printf("Erro no malloc\n"); exit(1); }
  lista->primeiro = NULL;
  lista->ultimo = NULL;

  // inserindo 10 elementos
  srand(time(NULL));   // indicamos para o C que vamos gerar números aleatórios
  int n = 10;
  for (int i = 0; i < 10; i++) {
    no_t *no = (no_t *) malloc(sizeof(no_t));
    if (lista->primeiro == NULL) {
      lista->primeiro = no;
    }
    no->valor = rand() % 20;
    no->prox = NULL;
    if (lista->ultimo != NULL)
      lista->ultimo->prox = no;
    lista->ultimo = no;
  }
  limpa(lista);
  return 0;
}
