#include<stdio.h>

char *ocorre(char c, char *s) {
  while (c != *s && *s) {
    s++;
    }
  return s;
  }

main () {
  char str[80], *p, ch;
  printf("Informe uma string:");
  gets(str);
  printf("Informe um caractere:");
  ch = getche();
  p = ocorre (ch, str);
  if (*p) printf("\n%s", p);
  else printf("\nNão há ocorrencia");
  }
