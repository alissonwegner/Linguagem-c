/*3. Faça um programa que passe um vetor de 50 elementos inteiros para uma 
função na qual ele é preenchido com 50 valores inteiros informados pelo usuário. 
A posição no vetor que cada elemento ocupará será definida aleatoriamente. 
Quando o vetor já estiver com a maioria de suas posições ocupadas,
é provável que a função de geração de números pseudo-aleatórios indique posições já ocupadas. 
Uma forma de lidar com este problema seria continuar gerando índices possíveis até encontrar uma posição desocupada. 
Procure fazer um programa que, garantidamente, precise de apenas 50 chamadas à função de geração de números para definir as 50 posições.*/
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
		 				scanf("%d", &vet[z]);// lendo um valor na posiçao M no vet 1
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
  
