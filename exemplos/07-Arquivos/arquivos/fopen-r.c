/*
 * Testes para abertura de arquivos para leitura.
 */

#include <stdio.h>

int main(void) {

  if (fopen("sem-arq.txt", "r") == NULL)
    perror("Erro ao tentar abrir o arquivo sem-arq.txt");

  if (fopen("sem-perm.txt", "r") == NULL)
    perror("Erro ao tentar abrir o arquivo sem-perm.txt");

  if (fopen("teste.txt", "r") == NULL)
    perror("Erro ao tentar abrir o arquivo teste.txt.");
  else
    printf("Arquivo teste.txt aberto sem problemas.\n");

  return 0;
}
