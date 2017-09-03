#include <stdio.h>
int main(void) {
  printf("Os alunos são %d.\n",350);
  printf("Os alunos são %2d.\n",350);
  printf("Os alunos são %4d.\n",350);
  printf("Os alunos são %6d.\n",350);
  printf("Os alunos são %02d.\n",350);
  printf("Os alunos são %04d.\n",350);
  printf("Os alunos são %06d.\n",350);
  printf("Os alunos são %10.02d.\n",350);
  printf("Os alunos são %10.04d.\n",350);
  printf("Os alunos são %10.06d.\n",350);
  return 0;
}
