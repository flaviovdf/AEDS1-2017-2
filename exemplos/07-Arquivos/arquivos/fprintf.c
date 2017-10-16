/*
 * Cópia de arquivo para outro arquivo.
 */
#include<stdio.h>

int main(void) {
  FILE  *fr, *fw;
  char c;

  fr = fopen ("teste.txt", "r");
  fw = fopen ("aeds1.txt", "w");

  if (fr == NULL) {
    perror("teste.txt");
    return 1;
  }

  if (fw == NULL) {
    perror("aeds1.txt");
    return 2;
  }

  while (fscanf(fr, "%c", &c) != EOF) {
    if(c == ' ' || c == '\n')
    	fprintf(fw, "%c", c);
    else
    	fprintf(fw, "%c", c-32);
  }

  fclose(fr);
  fclose(fw);

  return 0;
}
