/*1. Escreva um programa que preencha um vetor de 50 elementos, de modo que o valor da posi��o i seja igual a i. 
A seguir, passe o vetor para uma fun��o onde ele � embaralhado, ou seja, os valores s�o redistribu�dos (pseudo)aleatoriamente dentro do vetor. 
O m�todo de embaralhamento n�o deve ter bias, ou seja, todas as permuta��es poss�veis devem ser igualmente prov�veis.*/
#include <stdio.h>
#include <time.h>
int main(){
  int r, i, a, i2;
  int vet[5] = {65, 69, 73, 79, 85};
  for (i=0; i<5; i++){
  	printf("%d", vet[i]);
  
  	}
  	srand((unsigned) time(NULL) );
  		i2= i;
	for(i=0;i<8;i++){
	
  	r = rand() % i2;
  	a =vet[i];
  	vet[i] = vet[r];
  	vet[r] = a;
  	i2--;
  	}
	
	printf("\n embaralhado\n");
	for(i=0; i<5;i++){
	
	printf("  %d  ", vet[i]);
}
	
	
	
}

