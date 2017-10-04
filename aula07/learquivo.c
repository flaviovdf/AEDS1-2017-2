#include <stdio.h>
int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Usuario nao passou nome do arquivo!\n");
    return 1;
  }
  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    printf("Arquivo nao existe!\n");
    return 1;
  }
  int var;
  fscanf(file, "%d", &var);
  char texto[20];
  fscanf(file, "%s", texto);
  printf("li %s\n", texto);
  fclose(file);
}
