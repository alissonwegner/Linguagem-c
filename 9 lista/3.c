/* 3. Escrever um programa que leia uma string e crie uma nova string na qual as 
letras são replicadas de acordo com sua posição na string lida, ou seja, a primeira letra é copiada uma vez
, a segunda duas vezes, a terceira três vezes, e assim por diante. Se for lida a string “hora”, por exemplo,
 a string criada deve ser “hoorrraaaa”. A string resultante deve ser colocada em área de memória alocada para este fim, com o tamanho exato necessário. */
#include <stdio.h>

char *funcao (char *a, char *b) {
  int c;
  char *bi, *ai;
  ai = a;
  bi = b;
  for ( ; *a; a++) {
    for(c = (a - ai); c >= 0; c--) {
      *b = *a;
      b++;
      }
    }
  *b = '\0';
  return bi;
  }

/*
char *funcao (char *a, char *b) {
  int c, c2;
  char *bi;
  bi = b;
  c2 = 1;
  for ( ; *a; a++) {
    for(c = c2; c > 0; c--) {
      *b = *a;
      b++;
      }
    c2++;
    }
  *b = '\0';
  return bi;
  }
*/

int main(void) {
  char str1[20], str2[20];
  printf("Digite a string: ");
  gets(str1);
  printf ("String resultante: %s", funcao(str1, str2));
  }
