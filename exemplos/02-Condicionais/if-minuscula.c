#include<stdio.h>

int main(void) {
  char c;

  printf("Letra: ");
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z')
    printf("Letra minúscula.\n");
  else
    printf("Outro caracter.\n");
}
