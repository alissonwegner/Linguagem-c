/* 1. Escreva um programa que leia um número inteiro e passe o número para uma função 
em que é calculado o valor do seu fatorial. 
O resultado deve ser mostrado na função main. */

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
