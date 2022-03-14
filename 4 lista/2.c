/* escreva um progama que leia as notas de 10 individuos. quanto melhor a nota , mais apto esta o individuo para uma certa tarefa.
A seguir, o programa deve ler um valor n (menor que 10) e sortear n individuos diferentes,
 e mostrar na tela a nota do melhor avaliado dentre os sorteados.*/
#include <stdio.h>
#include <time.h>
  int main() {
int n2, aux, n, r, i, x;
float melhor=0;
float vet[10] = {9.2, 1, 4.5, 3.8, 5, 5.6, 7.5, 4.4, 6.7, 2.9};
srand((unsigned) time(NULL) );
printf("\ninforme n:");
	scanf("%d", &n);
n2=9;
x=10;
	for(i=0;i<n;i++){
			  		r = rand() %x;
  		printf("\nvalor de r %d:", r);
		

  	
  	
  	  	if(vet[r]>melhor){
			
  		melhor = vet[r];}
  		
		aux = vet[r];
		vet[r]= vet[n2];
		vet[n2] = aux;
  		n2--;
  		x--;
  		printf("\nmelhor nota %f", melhor);
  }
printf("\nmelhor nota %f", melhor);
for(i=0;i<10;i++){
	printf("\nvetor %f", vet[i] );
}
}
