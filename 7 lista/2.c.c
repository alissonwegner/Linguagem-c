/*Escreva um programa que leia uma string e passe esta string para uma função na qual são trocadas de lugar a primeira e a última letras. 
A função deve receber a string através de um ponteiro, e fazer a manipulação sem usar índices. 
Exiba a string original e a string resultante através de um printf na função main.*/

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

