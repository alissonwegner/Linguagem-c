#include<stdio.h>

main() {
  char s[4];
  int *q;
  s[0] = 'A';
  s[1] = '\0';
  s[2] = '\0';
  s[3] = '\0';
  q = (int *) s;
  printf("\n%d", *q);
  }

