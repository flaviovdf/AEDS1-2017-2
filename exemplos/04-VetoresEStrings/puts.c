#include <stdio.h>

int main () {
  
  char texto[50];

  fgets (texto, 50, stdin);
  puts (texto);
  fputs (texto, stdout); 

  return (0);
}
