/*
 * Cópia de arquivo para a saída padrão.
 */
#include<stdio.h>

int main(void) {
  FILE* f;
  char c;

  f = fopen ("teste.txt", "r");

  if (f == NULL) {
    perror("teste.txt");
    return 1;
  }

  while (fscanf(f, "%c", &c) != EOF)
    printf("%c", c);
  fclose(f);
  return 0;
}
