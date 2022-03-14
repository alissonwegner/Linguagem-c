/*Escreva um programa que leia duas strings e um valor N. O programa deve copiar os conteúdos das strings lidas para outra string, 
inserindo a segunda dentro da primeira, a partir da posição indicada por N. 
Por exemplo, lidos “A aula”, “outra ” e 2, a string resultante deve ficar “A outra aula”. 
A string que receberá os conteúdos deve ser alocada de forma a ter o tamanho exato de acordo com o conteúdo que receberá.*/
#include <stdio.h>
#include <stdlib.h>
 char *func(char str[], char str2[], int n){
 	int  i=0, contador, x=11, a, z=0;
 	char *p= NULL;
 	p = (char *) malloc (sizeof(char)* x);
	for(a=0;a <n && str[a] != '\0';a++,i++)
	{
		*(p+i)= str[a];
	}
	//*(p+i)='\0';
		for(z=0;str2[z] != '\0';z++,i++)
	{
		*(p+i)= str2[z];
	}

	for(a;str[a] != '\0';a++,i++)
	{
		*(p+i)= str[a];
	}
	

 return (p);

 }
int main(){

char str[10]="A aula";
char str2[10]={"outra"};
char *p;
int n=2;
p = func(str, str2, n);


	printf("%s", p);


free(p);
}


