/*Escreva um programa que leia uma string e passe esta string para uma fun��o na qual s�o trocadas de lugar a primeira e a �ltima letras. 
A fun��o deve receber a string atrav�s de um ponteiro, e fazer a manipula��o sem usar �ndices. 
Exiba a string original e a string resultante atrav�s de um printf na fun��o main.*/

#include <stdio.h>
#include<conio.h>

void func(char str2[]){
  char *aux;
  char *p, *a;
  p = str2;
  a = str2;   
	while(*p !='\0'){
	p++;
	}
	p--;
  aux = *a;
  *a = *p;
  *p = aux;

}
	
	








int main() {
    char str[30];
    char str2[30];
   int i;
    printf("Digite uma string: ");
    scanf("%s", str);
    	for(i=0;str[i]!='\0';i++){
	str2[i]=str[i];
	}
    func(str2);
	printf("\nA string 1 : %s", str);
	printf("\nA string 2 : %s", str2);

}

