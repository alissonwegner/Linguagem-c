/*Escreva um programa que leia uma string e uma letra, identificada por ch, e chame uma fun��o na qual o conte�do da string lida, 
a partir da primeira ocorr�ncia de ch, � copiado para outra string. 
Ap�s o retorno da fun��o, as duas strings devem ser mostradas na tela. 
Se a letra ch n�o ocorrer na string lida, a string que receberia a c�pia deve ficar vazia (receber apenas um caractere �\0�).*/

#include <stdio.h>

char func(char *x, char *y,char ch) {
	for(;*x != ch && *x != '\0';x++){}
	if(*x== '\0'){
		*y='\0';
	}
	else{
		while(*x!='\0'){
			*y = *x;
			x++;
			y++;
	}
		}

	}
  	  

main (void) {
	char ch;	
  char str[50], str2[50];
  printf("Digite a string: ");
  gets(str);
    printf("Digite uma letra: ");
    scanf("%c", &ch);
func(str, str2, ch);
    printf("\nstring: %s", str);
	printf("\nstring: %s", str2);
  }
