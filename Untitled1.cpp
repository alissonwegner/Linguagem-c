#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 3 
int vogal(){//função gera 5 numero aleatorios para poder passar isso para um matriz
	int r, i, a, i2;
	srand((unsigned) time(NULL) );
  int vet[5] = {65, 69, 73, 79, 85};
  int *aux[8];
  int *cont;
  cont = matrizaux; //contador apontando para matriz auxiliar
  for(i=0;i<5;i++){  
    r = rand() %3+ cont;
    t = rand() %5 ;
    cont+3;
    matrizaux+r = vet[t]
}
  
    
    
    
    
    
    
    
  
  for (i=0; i<5; i++){
  	printf("%d", vet[i]);
  
  	}
  	
  		i2= i;
	for(i=0;i<5;i++){
	
  	r = rand() % i2;
  	a =vet[i];
  	vet[i] = vet[r];
  	vet[r] = a;
  	i2--;
  	}
}



main(){
	srand((unsigned) time(NULL) );
	


}
	

