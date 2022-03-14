/* copia de string correta. origem e destino sao parametros */

#include<stdio.h>

void copy (char *d, char *o) {
  for (; *o; o++, d++)
    *d = *o;
  *d = '\0';
  }

main () {
  char ori[30], dest[30];
  gets(ori);
  printf("String de destino antes da copia: %s\n", dest);
  copy(dest, ori);
  printf("String de destino apos da copia: %s\n", dest);
  }
