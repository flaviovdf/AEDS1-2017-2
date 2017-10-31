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
  int numero_elementos;
} lista_t;

no_t *iesimo(lista_t *lista, int iesimo) {
  if (lista == NULL ||
      lista->primeiro == NULL ||
      iesimo >= lista->numero_elementos) {
    return NULL;
  }
  no_t *retorno = lista->primeiro;
  for (int i = 0; i < iesimo; i++) {
    retorno = retorno->prox;
  }
  return retorno;
}

void popula_lista(lista_t *lista, int n) {
  // inserindo 10 elementos
  srand(time(NULL));   // indicamos para o C que vamos gerar números aleatórios
  for (int i = 0; i < n; i++) {
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
    lista->numero_elementos++;
  }
}

int main(void) {
  lista_t *lista = (lista_t *) malloc(sizeof(lista_t));
  if (lista == NULL) { printf("Erro no malloc\n"); exit(1); }
  lista->primeiro = NULL;
  lista->ultimo = NULL;
  lista->numero_elementos = 0;
  popula_lista(lista, 5);
  int i = 2;
  no_t *ies = iesimo(lista, i);
  if (ies == NULL) {
    printf("Não existe elemento i=%d\n", i);
  } else {
    printf("ies->valor %d\n", ies->valor);
  }
  return 0;
}
