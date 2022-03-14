#include <stdio.h>

int sqr (int);

void main (void) {
  int x = 10;
  printf("%d, %d", x, sqr(x));
  }

int sqr(int x) {
  x = x*x;
  return x;
  }
