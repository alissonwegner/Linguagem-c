/* Escreva um programa que leia uma string e um valor inteiro N, e
 passe ambos (pelo menos) para uma função em que é feita a
 verificação de quais letras se repetem na string exatamente N vezes.
 A função deve receber a string através de um ponteiro para o
 primeiro elemento. Não devem ser usados índices na manipulação da
 string. Após o retorno, na função main, as letras que ocorrem N
 vezes devem ser exibidas na tela. Por exemplo, lida a string
 "borboleta" e o valor 2 para N, devem ser exibidas as letras 'b' e
 'o', ou lida a string "paralelepípedo" e o valor 3 para N, devem
 ser exibidas as letras 'p' e 'e'.

"fanfarrao"
 */

#include<stdio.h>

void letras(char *s, int n, char *res) {
  char *p, *i;
  int cont;
  i = s;
  for ( ; *s; s++) {
    for (p = s-1; p >= i && *p != *s; p--);
    if (p < i) {
      cont = 1;
      for (p = s+1; *p; p++) {
        if (*p == *s)
          cont++;
        }
      if (cont == n) {
        *res = *s;
        res++;
        }
      }
    }
  *res = '\0';
  }

main() {
  char str[30], res[27];
  int n;
  printf("Digite a string: ");
  gets(str);
  printf("Digite o valor: ");
  scanf("%d", &n);
  letras(str, n, res);
  printf("%s", res);
  }
