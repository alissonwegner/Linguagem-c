/* pq n�o mostra a string retornada? problema visto antes, a string foi alocada dentro de uma fun��o. Ao chamar o printf na main, acho que ele aloca coisas por cima! Tirando os coment�rios do outros printf j� d� para ver. Tirando o coment�rio do bloco que faz c�pia para str3, da para ver que o retornado est� correto, s� � bagun�ado */

#include <stdio.h>

char *func(char *s) {
  char s2[20];
  char *x;
  int i;
  x = s2;
  for(i = 0; s[i] != '\0'; i++)
    s2[i] = s[i];

//printf("%c, %c, %c, %c, %c\n", *x, *(x+1), *(x+2), *(x+3), *(x+4));

  s2[i] = '\0';

//printf("%c, %c, %c, %c, %c\n", *x, *(x+1), *(x+2), *(x+3), *(x+4));

  return x;
  }

int main(void) {
  char str1[20], *str2;
  printf("Digite uma string: ");
  scanf ("%s", str1);

  str2 = func(str1);

printf("%c, %c, %c, %c, %c\n", *str2, *(str2+1), *(str2+2), *(str2+3), *(str2+4));

//  {
//  char str3[20];
//  int i;
//  for (i = 0; i < 20; i++) // i < 20 para copiar exatamente o mesmo conteudo
//    str3[i] = str2[i];
//  printf("str3: %s\n", str3);
//  }

  printf("Resultado: %s\n", str2);

//  printf("%c, %c, %c, %c, %c\n", *str2, *(str2+1), *(str2+2), *(str2+3), *(str2+4));

  }
