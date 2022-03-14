/* 1. Escreva programa que leia um vetor de 500 elementos inteiros. A seguir, o programa deve construir 3 novos vetores,
 o primeiro contendo os elementos do vetor lido que ao serem divididos por 3 apresentem resto igual a 2,
  o segundo contendo os elementos do vetor lido que ao serem divididos por 3 apresentem resto igual a 1,
   e o terceiro contendo os elementos do vetor lido que ao serem divididos por 3 apresentem resto igual a 0.
Os tr�s vetores devem ser criados dinamicamente, e seus tamanhos devem estar de acordo com os inteiros que ir�o conter.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int *inserir(int vet[10], int val, int *rest){
    int a;
    int *aux= NULL;
    aux = rest;
	for(a=0 ;a<10;a++){
        if(vet[a]%3==val){

            *aux=vet[a];
            aux++;
        }
    }

    return(rest);
}


int retorno(int vet[10], int b){
    int cont=0, i, temp;

    for(i=0;i<10;i++){
        if( vet[i] %3 ==b){

            cont++;
        }
    }
    return(cont);
}


int main(){
    int vet[10]={1, 4, 6, 7, 22, 44, 78 , 33, 3, 5};

    int *rest0=NULL, *rest1=NULL, *rest2=NULL; 
    int val=2, i, num0, num1, num2 ;

    num2 = retorno(vet, val);

    rest2        = (int *)malloc (num2 * sizeof(int));
    rest2        = inserir(vet, val, rest2);
val--;
    num1 = retorno(vet, val);

    rest1        = (int *)malloc (num1 * sizeof(int));
    rest1        = inserir(vet, val, rest1);
val--;
        num0 = retorno(vet, val);

    rest0        = (int *)malloc (num0 * sizeof(int));
    rest0        = inserir(vet, val, rest0);











/**********************************************/
    while(num2 != 0){
        if(rest2 != NULL){
            printf("\nValor de resto de 2: %d", *rest2);
            rest2++;
        }
        num2--;
    }
    while(num1 != 0){
        if(rest1 != NULL){
            printf("\nValor de resto de 1: %d", *rest1);
            rest1++;
        }
        num1--;
    }
        while(num0 != 0){
        if(rest0 != NULL){
            printf("\nValor de resto de 0: %d", *rest0);
            rest0++;
        }
        num0--;
    }
    free(rest2);
    free(rest1);
    free(rest0);
    printf("\nLiberou");
}
