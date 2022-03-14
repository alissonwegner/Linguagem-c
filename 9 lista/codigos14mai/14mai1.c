/* Escrever um programa que leia dois vetores A e B de 20 elementos inteiros cada, que representam
conjuntos. O programa deve possuir uma função que receba os dois conjuntos e gere o conjunto diferença
entre A e B, outra função que receba os dois conjuntos e gere o conjunto intersecção entre A e B, e outra
função que receba os dois conjuntos e gere o conjunto união entre A e B. Os vetores para conter os
conjuntos devem ser alocados dinamicamente e ter o menor tamanho possível. Os conjuntos resultantes
devem ser exibidos na função main.
*/

/*FOI FEITA SÓ A FUNÇÃO DA DIFERENÇA */

#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int *funcDif(int *A, int *B, int *cont) {
  int *auxA, *auxB, *fimA, *fimB, *res, *auxRes;
  *cont = 0;
  fimA = A + TAM;
  fimB = B + TAM;
  // contar elementos de A que não não tem copia em B
  for (auxA = A; auxA < fimA; auxA++) {
    /*
    int flag = 0;
    for (auxB = B; auxB < fimB; auxB++) {
      if (*auxA == *auxB)
        flag = 1;
      }
    if (flag == 0)
      cont++;
    */
    for (auxB = B; auxB < fimB && *auxB!=*auxA; auxB++);
    if (auxB == fimB)
      (*cont)++;
    }
  res = (int *) malloc (*cont * sizeof(int));
  auxRes = res;
  for (auxA = A; auxA < fimA; auxA++) {
    for (auxB = B; auxB < fimB && *auxB!=*auxA; auxB++);
    if (auxB == fimB) {
      *auxRes = *auxA;
      auxRes++;
      }
    }
  return res;
  }

main () {
  int i, A[TAM], B[TAM], *uniao, *inter, *dif, tam;
  printf("Digite o primeiro conjunto: ");
  for (i = 0; i < TAM; i++)
    scanf("%d", &A[i]);
  printf("Digite o segundo conjunto: ");
  for (i = 0; i < TAM; i++)
    scanf("%d", &B[i]);
  dif = funcDif(A, B, &tam);
  if (tam > 0) {
    printf("O conjunto diferenca (A-B) tem os seguintes valores: ");
    for (i=0; i<tam; i++)
      printf("%d ", dif[i]);
    }
  else
    printf("O conjunto diferenca (A-B) é vazio.");


  free(dif);
  }
