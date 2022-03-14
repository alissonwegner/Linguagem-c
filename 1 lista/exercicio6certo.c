/* 6. Escreva um programa que leia um valor inteiro positivo n menor que 500 e um vetor de 500 elementos inteiros. 
A seguir, passe o inteiro e o vetor para uma função, que encontrará e retornará o n-ésimo maior elemento. 
O vetor não deve ser duplicado e nem modificado (não ordene). Por exemplo, lido o valor 3, deve ser mostrado o terceiro maior elemento do vetor. 
Considere que o vetor não tem valores repetidoso */
#include<stdio.h>

int func(int vet[], int n) {
  int maior, i, aux;
  maior = vet[0];
  for (i=1; i < 5; i++)//descobrir o maior
    if (vet[i] > maior)
      maior = vet[i];
      
  for (n ; n > 1; n--){//descobrir n maior
    for (i=0; vet[i] >= maior; i++);
    aux = vet[i];
    for (i++; i < 5; i++) 
      if (vet[i] > aux && vet[i] < maior)
        aux = vet[i];
    maior = aux;
    }
  return maior;
  }

main () {
  	int i, n, vet[5];
  	printf("Digite o valor de n: ");
  	scanf("%d", &n);
  	for(i = 0; i < 5; i++){
  	printf("vetor: ");
    	scanf("%d", &vet[i]);
    }
  	printf("Valor: %d.", func(vet, n));
  	}
