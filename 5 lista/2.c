/*2. Escrever um programa que leia uma string e crie uma nova string na qual as letras s�o 
replicadas de acordo com sua posi��o na string lida, ou seja, a primeira letra � copiada uma vez, 
a segunda duas vezes, a terceira tr�s vezes, e assim por diante. 
Se for lida a string �hora�, por exemplo, a string criada deve ser �hoorrraaaa�. 
Fa�a a manipula��o com ponteiros, sem usar �ndices.8*/
#include <stdio.h>

char *func (char *x, char *y) {
  int c;
  char *y2, *x2;
  x2 = x;// aponta pro mesmo local
  y2 = y;
  for ( ; *x; x++) {
    for(c = (x - x2); c >= 0; c--) {
	  *y = *x;
      y++;
      }
    }
  return y2;
  }

int main(void) {
  char str[30], str2[30];
  printf("Digite a string: ");
  gets(str);
  printf ("String: %s", func(str, str2));
  }
