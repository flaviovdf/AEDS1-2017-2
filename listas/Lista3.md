# Lista 3: Recursividade e Ponteiros

## Ponteiros

## Recursividade

## Recursividade + Ponteiros!

1. **Recursão de Cauda** Usando o esqueleto abaixo, implemente uma função recursiva que encontra um elemento em uma lista encadeada. Isto é, se a lista contém os elementos `["didi", "dede", "mussum", "zacarias"]` e a entrada da função for `"dede"` seu código deve retornar `1`. Caso o elemento não exista, o código deve retornar `-1`.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct no {
  struct no *prox;
  char *valor;
} no_t;


int acha_elemento(no_t *no, char *elemento) {
  // seu código aqui
  // lembre-se que a função strcmp pode ser usada para comparar 2 strings
  // quando 2 strings são iguais strcmp(s1, s2) == 0.
  // se s1 < s2 (ordenação alfabética) strcmp(s1, s2) < 0;
  // senão strcmp(s1, s2) > 0.
  // . . .
  return -1;
}


no_t *insere(no_t *ultimo, char *valor) {
  no_t *no = (no_t *) malloc(sizeof(no_t));
  if (no == NULL) {
    printf("erro de memória\n");
    exit(1);
  }
  no->prox = NULL;
  no->valor = valor;
  if (ultimo != NULL)
    ultimo->prox = no;
  return no;
}


int main(void) {
  no_t *primeiro = insere(NULL, "didi");
  no_t *ultimo = insere(ultimo, "mussum");
  ultimo = insere(ultimo, "zacarias");
  ultimo = insere(ultimo, "dede");

  int pos = acha_elemento(primeiro, "zacarias");
  if (pos > -1) printf("Achei zacarias na posição %d!\n", pos);
  else printf("não achei zacarias :(\n");

  pos = acha_elemento(primeiro, "dede");
  if (pos > -1) printf("Achei dede  na posição %d!\n", pos);
  else printf("não achei dede :(\n");

  pos = acha_elemento(primeiro, "moe");
  if (pos > -1) printf("Achei moe na posição %d!\n", pos);
  else printf("não achei moe :(\n");

  no_t *aux;
  while (primeiro != NULL) {
    aux = primeiro->prox;
    free(primeiro);
    primeiro = aux;
  }

  return 0;
}
```
