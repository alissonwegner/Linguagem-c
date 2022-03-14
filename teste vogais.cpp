 //int vet[5] = {65, 69, 73, 79, 85};
 
 
 
 
 #include <stdio.h>
#include <time.h>

func(int ){
	 int z, aux, x=5, m, i;
	 int vet2[5] = {65, 69, 73, 79, 85};
	 int vet[8];
	 	 srand((unsigned) time(NULL) );
		 for(i=5;i>0;i--){		
		 		m = (rand() % x);// gerando numero aleatorio e salvando em m
						vet[n] = vet2[m];
						aux = vet2[m];
						vet2[m]= vet2[x-1];
						vet2[x-1] = aux;
						x--;
  	}
				for(i=3;i>0;i--)
		 				m = (rand() % x);// gerando numero aleatorio e salvando em m
						vet[n] = vet2[m];
						aux = vet2[m];
						vet2[m]= vet2[x-1];
						vet2[x-1] = aux;
						x--;
						/*a minha ideia aqui e fazer uma função aonde vai preencher um veotr de 8 posições que vai ser as vogais depois em outra
						funcao vai gera as possiçoes com aquele cont pulando de 3 em 3 e com a renge de 2 pra poder colocar as linhas e vai sobra 2 vogais 
						passamos as possiçoes das que ja foram sorteadas pro final e geramos as outras duas ai passamos a outras duas e passamos pro final e
						geramos as consoantes(eu tinha comentado de usar um vetor pra salva as possiçoes pra depois usar o shuffle acho que da usar esse vet
						que ta salvando as vogais ai ele vai trocando com a matriz e claro ao mesmo tempo vai salvando as letras na matriz da main)*/
}
	return vet[];// nao sei se da desse jeito acho que vai temque ser com ponteiro		
	 }


  int main() {
    int m, i, vet[5];  	
m = func(vet);
	
  }
