/*Escreva um programa no qual são lidos valores para um vetor de 5000 elementos inteiros. 
A seguir, o vetor deve ser passado como parâmetro para uma função, onde é contado o número de 
ocorrências de pares adjacentes ordenados de forma crescente. 
Isto significa que todos os pares adjacentes devem ser testados, e deve ser 
contado o número de vezes em que o valor de um elemento é menor que o do seu sucessor.*/

#include<stdio.h>
#define TAM 10
int func(int vet[]){
	int i, m=0, cont;
		for(i=0;i<TAM-1;i++){
			m++;
			if(vet[i]<vet[m])
				cont++;
}
	return cont;
}
int main(){
	int i=0, num;
	int vet[TAM];
	for(i;i<TAM;i++){
	printf("informe o vetor");
	scanf("%d", &vet[i]);
	}
	num = func(vet);
	printf("foram %d ", num);
}
