/*3. Fa�a um programa que passe um vetor de 50 elementos inteiros para uma 
fun��o na qual ele � preenchido com 50 valores inteiros informados pelo usu�rio. 
A posi��o no vetor que cada elemento ocupar� ser� definida aleatoriamente. 
Quando o vetor j� estiver com a maioria de suas posi��es ocupadas,
� prov�vel que a fun��o de gera��o de n�meros pseudo-aleat�rios indique posi��es j� ocupadas. 
Uma forma de lidar com este problema seria continuar gerando �ndices poss�veis at� encontrar uma posi��o desocupada. 
Procure fazer um programa que, garantidamente, precise de apenas 50 chamadas � fun��o de gera��o de n�meros para definir as 50 posi��es.*/
#include <stdio.h>
#include <time.h>

func(int vet[]){
	 int z, aux, x=5, m, i;
	 int vet2[5] = { 0, 1, 2, 3, 4};
	 	 srand((unsigned) time(NULL) );
		 for(i=5;i>0;i--){		
		 		m = (rand() % x);// gerando numero aleatorio e salvando em m
						z = vet2[m];
						aux = vet2[m];
						vet2[m]= vet2[x-1];
						vet2[x-1] = aux;
						printf("informe o valor do vetor");
		 				scanf("%d", &vet[z]);// lendo um valor na posi�ao M no vet 1
						x--;
  	}
  	printf("vetor:");
  		for(i=0; i<5;i++){
			printf("%d", vet[i]);
}
	return 0;		
	 }


  int main() {
    int m, i, vet[5];  	
m = func(vet);
	
  }
  
