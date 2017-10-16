#include <stdio.h>
int main(void) {
  int a = 7;
  int *r = a;
  printf("end. %p\n", r);
  printf("valor. %d\n", a);
  printf("valor da ref r. %d\n", *r);
  a++;
  printf("end. %p\n", r);
  printf("valor. %d\n", a);
  printf("valor da ref r. %d\n", *r);
  r++;
  printf("end. %p\n", r);
  printf("valor. %d\n", a);
  printf("valor da ref r. %d\n", *r);
  int *novo_r = &a + 1;
  printf("end. %p\n", r);
  printf("end do novo_r. %p\n", novo_r);
  printf("valor. %d\n", a);
  printf("valor da ref r. %d\n", *r);
  return 0;
}
