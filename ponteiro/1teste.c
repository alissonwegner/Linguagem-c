/*1. Escreva um programa que leia uma string e faça a sua inversão. 
Por exemplo, lida a string "prova", deve ser exibido na tela "avorp". A inversão deve ser feita na própria string, 
sem copiar seu conteúdo para outra. Além disso, não use índices, fazendo toda manipulação através de ponteiros.
*/
#include <stdio.h>

int main(void) {
  int vet[5] = {1, 2, 3, 4, 5};
  int i;
  int *x1, *y1, aux;
  x1 = &vet;
  for (y1=vet; *y1; y1++){}//leva o ponteiro ate o final
  y1--;//para nao nao ficar parado no \0

 for(;y1>=x1;x1++){
 	 aux = *x1;
 	*x1=*y1;
 	*y1 = aux;
 	y1--;
 }
 
  
  printf ("X1: %d\n", *x1);
  printf ("y1: %d\n", *y1);
    printf ("aux: %d\n", aux);

  for(i;i<5;i++){
  	printf("\nvetor na possicao %d vetor %d", i,vet[i]);
  }
  }
 
  
