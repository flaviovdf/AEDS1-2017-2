#include <stdio.h>

void copia(FILE *leitura, FILE *escrita) {
  char c;
  while (!feof(leitura)) {
    fscanf(leitura, "%c", &c);
    fprintf(escrita, "%c", c);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Passe dois arquivos para o programa ");
    printf("%s\n", argv[0]);
    return 1;
  }
  FILE *leitura = fopen(argv[1], "r");
  if (leitura == NULL) {
    printf("Arquivo nao existe %s!\n", argv[1]);
    return 1;
  }
  FILE *escrita = fopen(argv[2], "w");
  copia(leitura, escrita);
  fclose(leitura);
  fclose(escrita);
  return 0;
}
