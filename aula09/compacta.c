#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *compacta(char *string) {
  char *resposta = (char *) malloc(2 * sizeof(string)+1);
  int repeticoes = 1;
  int j = 0;
  for (int i = 1; i < strlen(string); i++) {
    if (string[i] == string[i-1]) {
      repeticoes++;
    } else {
      resposta[j++] = string[i-1];
      resposta[j++] = repeticoes + 48;
      repeticoes = 1;
    }
  }
  resposta[j++] = string[strlen(string)-1];
  resposta[j++] = repeticoes + 48;
  resposta[j++] = '\0';
  return resposta;
}

int main(void) {
  char string[] = "aaaaabcdddeeeffffff   abc";
  char *resposta = compacta(string);
  printf("%s\n", resposta);
  free(resposta);
  return 0;
}
