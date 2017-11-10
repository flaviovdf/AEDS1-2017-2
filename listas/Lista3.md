# Lista 3: Recursividade e Ponteiros

## Ponteiros

## Recursividade

1. **Recursão de Cauda** Usando o esqueleto abaixo, implemente uma função recursiva que encontra um elemento em uma lista encadeada. Isto é, se a lista contém os elementos `["didi", "dede", "mussum", "zacarias"]` e a entrada da função for `"dede"` seu código deve retornar `1`. Caso o elemento não exista, o código deve retornar `-1`.
```c
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
  struct no *prox;
  char *val;
} no_t;

int acha_elemento(no_t no, char *elemento) {
  // seu código aqui
  // lembre-se que a função strcmp pode ser usada para comparar 2 strings
  // quando 2 strings são iguais strcmp(s1, s2) == 0.
  // se s1 < s2 (ordenação alfabética) strcmp(s1, s2) < 0; senão strcmp(s1, s2) > 0.
  // . . .
}

no_t *cria_no(char *valor) {
  no_t *no = (no_t *) malloc(sizeof(no_t));
  if (no == NULL) {
    printf("erro de memória\n");
    exit(1);
  }
  n->prox = NULL;
  no->valor = valor;
  return no;
}

int main(void) {
  no_t *primeiro = cria_no("didi");
  
  
  
  
  return 0;
}

```
