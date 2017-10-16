/*
 * Cópia de dois arquivos.
 */
#include<stdio.h>

int main(int argc, char* argv[]) {
  FILE *fr, *fw;
  char c;

  if(argc < 3) {
    printf("Uso: %s <arq_origem> <arq_destino>\n", argv[0]);
    return 1;
  }

  fr = fopen(argv[1], "r");
  if(fr == NULL) {
    perror(argv[1]);
    return 2;
  }

  fw = fopen(argv[2], "w");
  if(fw == NULL) {
    perror(argv[2]);
    return 3;
  }

  while(fscanf(fr, "%c", &c) != EOF)
    fprintf(fw,"%c", c);

  fclose(fr);
  fclose(fw);

  return 0;
}
