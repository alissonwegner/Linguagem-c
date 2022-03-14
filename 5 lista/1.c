/*1. Escreva um programa que leia uma string e verifique se esta string é um palíndromo. 
Atenção: considere todos os caracteres na verificação, ou seja, “luz azul”, por exemplo, não deve ser considerado palíndromo. 
Faça a manipulação com ponteiros, sem usar índices.*/
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
