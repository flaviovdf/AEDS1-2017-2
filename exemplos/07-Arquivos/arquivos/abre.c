#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Erro, favor passe um nome de arquivo");
    return EXIT_FAILURE;
  }

  char *fpath = argv[1];
  FILE *file = fopen(fpath, "r");
  if (file == NULL) {
    printf("Arquivo %s não existe!", fpath);
    return EXIT_FAILURE;
  }

  // Sempre feche arquivos!
  fclose(file);
  return EXIT_SUCCESS;
}
