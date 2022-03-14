/* Escreva um programa que leia uma string e um valor inteiro N, e
 passe ambos (pelo menos) para uma fun��o em que � feita a
 verifica��o de quais letras se repetem na string exatamente N vezes.
 A fun��o deve receber a string atrav�s de um ponteiro para o
 primeiro elemento. N�o devem ser usados �ndices na manipula��o da
 string. Ap�s o retorno, na fun��o main, as letras que ocorrem N
 vezes devem ser exibidas na tela. Por exemplo, lida a string
 "borboleta" e o valor 2 para N, devem ser exibidas as letras 'b' e
 'o', ou lida a string "paralelep�pedo" e o valor 3 para N, devem
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
