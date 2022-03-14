/* Escreva um programa em C em que um vetor de 10 elementos inteiros n�o
repetidos, al�m de dois valores inteiros lidos val e n, s�o passados para
uma fun��o na qual a posi��o de �ndice n do vetor tem seu valor substitu�do
por val. Se o valor de val j� aparecia no vetor, a posi��o da sua ocorr�ncia
anterior deve receber o valor da posi��o em que val ser� colocado. O vetor
alterado deve ser mostrado na fun��o main. A fun��o deve receber o vetor
atrav�s de um ponteiro para o primeiro elemento, e n�o devem ser usados
�ndices na manipula��o. */

#include<stdio.h>

void funcao(int *v, int n, int val) {
  int *a;
  //for (a = v; a < v+10 && *a != val; a++);
  for (a = v+(10-1); a >= v && *a != val; a--);
  if (a >= v) {
    *a = *(v+n);
    }
  *(v+n) = val;
  }

main() {
  int vet[10], val, n;
  printf("Digite o vetor: ");
  for (n = 0; n < 10; n++) {
    scanf("%d", &vet[n]);
    }
  printf("Digite o valor: ");
  scanf("%d", &val);
  printf("Digite a posicao: ");
  scanf("%d", &n);
  funcao(vet, n, val);
  for (n = 0; n < 10; n++) {
    printf("%d ", vet[n]);
    }
  }
