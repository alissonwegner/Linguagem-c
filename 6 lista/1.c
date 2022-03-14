/*Escreva um programa que leia uma string e uma letra, identificada por ch, e chame uma função na qual o conteúdo da string lida, 
a partir da primeira ocorrência de ch, é copiado para outra string. 
Após o retorno da função, as duas strings devem ser mostradas na tela. 
Se a letra ch não ocorrer na string lida, a string que receberia a cópia deve ficar vazia (receber apenas um caractere ‘\0’).*/

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
