#include <stdio.h>

/* Faz uma cópia de orig em dest, incluindo o caracter terminador \0.
   Supõe que dest tem espaço suficiente. */
void copia_str(char *orig, char *dest) {
  while (*orig != '\0') {
    *dest = *orig;
    dest++;
    orig++;
  }
  *dest = *orig;
}

int main(void) {
  char s1[] = "cadeia";
  char s2[20];

  copia_str(s1, s2);
  printf ("%s\n", s2);

  return 0;
}
