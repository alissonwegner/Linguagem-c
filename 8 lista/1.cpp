/*1. Escreva um programa que leia uma string e dois valores numéricos a e b, chame uma função que copie para uma segunda string 
as letras colocadas entre os índices a e b (inclusive) na primeira string. 
A segunda string deve ser criada de forma dinâmica e ter o tamanho exato para conter a string com os caracteres que receberá. 
Se um ou os dois índices forem inadequados para a string lida (muito grandes, por exemplo), esta deve ser copiada inteira.*/
#include <stdio.h>
#include <stdlib.h>



char *func(char str[], int a, int b){
	int x, i;
	char *p;
	x= (b-a)+2;
p = (char *) malloc (sizeof(char)* x);

	for(;a<=b;a++,i++)
	{
		*(p+i)= str[a];
	}
	*(p+i)='\0';
return p;
}
int main(){
	
	char str[30]= {"abacate"};
   int x, a, b;
   char *p;
    printf("\n str:%s", str);
  //  printf("Digite uma string: ");
   // scanf("%s", str);
	printf("\ninforme valor de A:");
    scanf("%d", &a);
    
    printf("\ninforme valor de B:");
        scanf("%d", &b);
 	p = func(str, a, b);
printf("%s", p);
	free(p);


	

}
