/* questao 4 da prova antiga */
#include<stdio.h>

void funcao(char *o, int n, char *r) {
  char *p1, *p2;
  int c;
  for (p1 = o; *p1; p1++) {
    for (p2 = o; *p2 != *p1; p2++);
    if (p2 < p1)
      continue;
    c = 1;
    for (p2 = p1+1; *p2; p2++) {
      if (*p1 == *p2) {
        c++;
        if (c > n)
          break;
        }
      }
    if (c == n) {
      *r = *p1;
      r++;
      }
    }
  *r = '\0';
  }


main() {
  char str[30], strRes[30];
  int n;
  printf("Digite a string: ");
  gets(str);
  printf("Digite n: ");
  scanf ("%d", &n);
  funcao(str, n, strRes);
  printf("As letras que aparecem %d vezes na string sao %s.", n, strRes);
  }