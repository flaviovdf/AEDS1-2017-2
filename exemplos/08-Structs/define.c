#include <stdio.h>
#define NOTA 10
#define MENSAGEM "Parabens, nota %d\n"

int main(void) {
  printf("Parabens, nota %d\n", 10);
  printf("Parabens, nota %d\n", NOTA);
  printf(MENSAGEM, NOTA);
  return 0;
}
