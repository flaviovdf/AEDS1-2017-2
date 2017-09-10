#include<stdio.h>

int main(void) {
  char c;

  printf("Letra: ");
  scanf("%c", &c);  
  switch(c) {
  case 'a':
  case 'b':
  case 'c':
  case 'd':    
  case 'e':
  case 'f':
    /* *** */
  case 'z':    
    printf("Letra minúscula.\n");
    break;
  default:
    printf("Outro caracter.\n");
  }
}
