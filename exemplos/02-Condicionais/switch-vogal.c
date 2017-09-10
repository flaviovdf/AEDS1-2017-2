#include<stdio.h>

int main(void) {
  char c;

  printf("Letra: ");
  scanf("%c", &c);  
  switch(c) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':    
    printf("Vogal\n");
    break;
  default:
    printf("Não é vogal\n");
  }
}
