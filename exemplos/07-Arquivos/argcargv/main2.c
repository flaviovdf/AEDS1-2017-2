#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Recebi %d argumentos\n", argc);
  for (int i = 0; i < argc; i++)
    printf("Argumento %d foi %s\n", i, argv[i]);
  return 0;
}
