#include<stdio.h>
char ler();
main (void) {
  char x;
  x = ler();
  printf("\nO caractere lido e %c", x);
  }
char ler () {
  char ch;
  ch = getchar();
  return ch;
  }
