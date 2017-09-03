#include <stdio.h>
int main(void) {
  int x = 3;
  //int y = 10;
  int fat = 1;
  for (int i = x; i >= 1; i--) {
    fat = fat * i;
  }
}
