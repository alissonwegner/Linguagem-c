/*6. Escreva um programa que leia um valor inteiro positivo n menor que 500 e um vetor de 500 elementos inteiros. 
A seguir, passe o inteiro e o vetor para uma função, que encontrará e retornará o n-ésimo maior elemento.
 O vetor não deve ser duplicado e nem modificado (não ordene)
. Por exemplo, lido o valor 3, deve ser mostrado o terceiro maior elemento do vetor. Considere que o vetor não tem valores repetidos.*/

#include<stdio.h>
func(int n, int vet[]){
	int i, g, g2;
	g = vet[0];
	for (i=0;i<5;i++){
		if (g<vet[i] ||  f<n){
		f++;
		}
		return(g);
	  	
}
printf("valor g %d\n", g);
return 0;
	}
main() {
		int n, i;
		int vet[5];
		int func1;
		for (i=0;i<5;i++){
		printf("iforme um numero do vetor:");
	  scanf("%d", &vet[i]);
	}
	printf("inbforme um vbalor menor que 500: ");
	scanf("%d", &n);
	
	 func1 = func(n, vet);
  
  	  //printf("O fatorial do valor e: %d", fat);

		//for (i=0;i<5;i++){
	  	//printf("o valor%d\n:",vet[i]);
}

