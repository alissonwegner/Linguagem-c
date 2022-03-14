#include <stdio.h>
int funcao(int *p, int y) {
  y++;
  *p = 5;
  p = &y;
  return *p;
  }

main (void) {
  int x = 10, y = 20, z;
  z = funcao(&x, y);
  printf("%d, %d, %d, %d", x, y, z);
  }
