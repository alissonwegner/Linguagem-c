#include<stdio.h>

void ler (char *a, char *b) {
  *a = getchar();
  fflush(stdin);
  *b = getchar();
  return;
  }

main (void) {
  char x, y;
  ler(&x, &y);
  printf("\nOs caracteres lidos sao %c e %c", x, y);
  }
