/* 1. Escreva um programa que leia um n�mero inteiro e passe o n�mero para uma fun��o 
em que � calculado o valor do seu fatorial. 
O resultado deve ser mostrado na fun��o main. */

#include<stdio.h>
fatorial(int num){
		int x;
		x = 1;
		for(num;num>=1;num--){
		x = num * x;
		}
	return(x);
	}
main() {
		int num, fat;
	  printf("iforme um numero:");
	  scanf("%d", &num);
	 fat = fatorial(num);
  
  	  printf("O fatorial do valor e: %d", fat);

}
