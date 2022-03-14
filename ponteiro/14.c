#include<stdio.h>

int *func(void) {
  int a;
  a = 10;
  return &a;
  }

main() {
  int *p;
  p = func();
  printf("%d", *p);
  }
