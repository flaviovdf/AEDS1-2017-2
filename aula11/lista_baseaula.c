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
    if (no == NULL) { printf("Erro no malloc\n"); exit(1); }
    if (lista->primeiro == NULL) {
      lista->primeiro = no;
    }
    no->valor = rand() % 20;
    no->prox = NULL;
    if (lista->ultimo != NULL)
      lista->ultimo->prox = no;
    lista->ultimo = no;
  }
  return 0;
}
