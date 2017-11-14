#include <stdio.h>

int fat_iterativo(int n) {
  int resultado = 1;
  for (int i = 1; i <= n; i++)
    resultado *= i;
  return resultado;
}

int fat(int n) {
  int resultado;
  if (n == 0 || n == 1) {
    resultado = 1;
  } else {
    resultado = n * fat(n-1);
  }
  return resultado;
}

int main(void) {
  printf("iterativo: %d\n", fat_iterativo(6));
  printf("recursivo: %d\n", fat(6));
  return 0;
}
