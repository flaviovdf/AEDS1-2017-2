#include<stdio.h>

#define MAX_DISCOS 8
#define VAZIO -1

typedef struct torre {
  int topo;
  int discos[MAX_DISCOS];
} Torre;

typedef struct hanoi {
  int n_discos;
  int tam_max_disco; /* Parâmetro para desenho */
  Torre torres[3];
} Hanoi;

/* Variável global */
Hanoi h; 

void desenha_mesa() {
  int i;

  for (i = 0; i < 3 * (2 * h.tam_max_disco + 3) + 2; i++)
    printf("=");
  printf("\n");
}

void desenha_disco(int tam_disco) {
  int i;

  if (tam_disco == VAZIO) {
    for (i = 0; i < h.tam_max_disco + 1; i++)
      printf(" ");
    printf("|");
    for (i = 0; i < h.tam_max_disco + 1; i++)
      printf(" ");
    return;
  }

  for (i = 0; i < h.tam_max_disco - tam_disco; i++)
    printf(" ");
  printf("<");
  for (i = 0; i < tam_disco; i++)
    printf("-");
  printf("%d", tam_disco);
  for (i = 0; i < tam_disco; i++)
    printf("-");  
  printf(">");
  for (i = 0; i < h.tam_max_disco - tam_disco; i++)
    printf(" ");  
}

void desenha_hanoi(){
  int i, j;

  for (j = h.n_discos - 1; j >= 0; j--) {
    for (i = 0; i < 3; i++) {
      desenha_disco(h.torres[i].discos[j]);
      printf(" ");
    }
    printf("\n");
  }
  desenha_mesa();
  printf("\n");
}

void inicia_hanoi (int n_discos) {
  int j;

  h.n_discos = n_discos;
  h.tam_max_disco = n_discos - 1;
  for (j = 0; j < n_discos; j++) {
    h.torres[0].discos[j] = n_discos - j - 1;
    h.torres[1].discos[j] = VAZIO;
    h.torres[2].discos[j] = VAZIO;
  }
  h.torres[0].topo = n_discos - 1;
  h.torres[1].topo = -1;
  h.torres[2].topo = -1;
}

void move_disco(int origem, int destino) {
  h.torres[destino].topo++;
  h.torres[destino].discos[h.torres[destino].topo] = 
    h.torres[origem].discos[h.torres[origem].topo];
  h.torres[origem].discos[h.torres[origem].topo] = VAZIO;
  h.torres[origem].topo--;
  desenha_hanoi();
}

void move_hanoi (int n, int origem, int destino, int auxiliar) {
  if (n == 0)
    return;
  if (n == 1) {
    move_disco(origem, destino);
    return;
  }
  move_hanoi(n-1, origem, auxiliar, destino);
  move_disco(origem, destino);
  move_hanoi(n-1, auxiliar, destino, origem);
}

int main() {
  int n_discos;
  
  printf("Número de discos: ");
  scanf("%d", &n_discos);

  inicia_hanoi(n_discos);
  desenha_hanoi();

  move_hanoi(n_discos, 0, 1, 2); 
  desenha_hanoi();

  return 0;
}
