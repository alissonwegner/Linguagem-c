/*Escreva um programa que leia uma string e passe esta string para uma fun��o na qual s�o trocadas de lugar a primeira e a �ltima letras. 
A fun��o deve receber a string atrav�s de um ponteiro, e fazer a manipula��o sem usar �ndices. 
Exiba a string original e a string resultante atrav�s de um printf na fun��o main.*/

#include <stdio.h>
#include<conio.h>

char *func(char *str){
  char aux;
  char *p, *a;
  p = str;
  a = str;   
	while(*p !='\0'){
	p++;
	}
	p--;
  aux = *a;
  *a = *p;
  *p = aux;
return(str);
}
	
	








int main() {
    char str[30];
    char *str2;
   int i;
    printf("Digite uma string: ");
    scanf("%s", str);
printf("%s", str);
    str2 = func(str);
	printf("\nA string 1 : %s", str);
	printf("\nA string 2 : %s", str2);

}

