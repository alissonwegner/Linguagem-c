/* Implemente um programa em C que leia valores para um vetor de 15 elementos inteiros. Considerando
que estes elementos consistem nos elementos não nulos de uma matriz triangular inferior, faça um programa
que reconstrua a matriz bidimensional 5 x 5 (esta matriz deve ser declarada no início do programa)*/

#include<stdio.h>

void main (void) {
  int vet[15], bid[5][5], i, j, l;
  printf("Digite os 15 numeros: ");
  for (i = 0; i < 15; i++)
    scanf ("%d", &vet[i]);//le os 15 valores
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i < j) {
        bid[i][j] = 0;
        }
      else {
        l = ((i) * (i + 1)) / 2 + j;
        bid[i][j] = vet[l];
        }
      }
    }
  /*PARTE QUE MOSTRA A MATRIZ CONSTRUIDA*/
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (bid[i][j] < 0 || bid[i][j] >= 10) printf("   %d", bid[i][j]);
      else printf("    %d", bid[i][j]);
      }
    putchar('\n');
    }
  }

