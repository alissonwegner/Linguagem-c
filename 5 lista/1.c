/*1. Escreva um programa que leia uma string e verifique se esta string � um pal�ndromo. 
Aten��o: considere todos os caracteres na verifica��o, ou seja, �luz azul�, por exemplo, n�o deve ser considerado pal�ndromo. 
Fa�a a manipula��o com ponteiros, sem usar �ndices.*/
#include <stdio.h>
int func(char *x) {
  char *y;
  for (y=x; *y; y++){}//leva o ponteiro ate o final
  y--;//para nao nao ficar parado no \0
  
  	for( ;*x==*y && x<y;y--,x++);// faz o um ponteiro andar para direita e outro para esquerda e ir testando 
   		return x >= y;
  }

main (void) {
	
  char str[50];
  printf("Digite a string: ");
  gets(str);
  	if (func(str))
   		 printf ("e palindromo");
  	else
    	 printf ("nao e palindromo ");
  }
