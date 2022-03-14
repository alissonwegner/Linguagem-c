#include <stdio.h>
main () {
  int x, *p1x, **p2x, ***p3x, ****p4x, *****p5x;
  x = 13;
  p1x = &x;
  p2x = &p1x;
  p3x = &p2x;
  p4x = &p3x;
  p5x = &p4x;
  printf("\n%d, %d, %d, %d, %d, %d", *****p5x, ****p4x, ***p3x, **p2x, *p1x, x);
  }
