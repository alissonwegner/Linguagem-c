/* Escreva um programa em C em que um vetor de 10 elementos inteiros não
repetidos, além de dois valores inteiros lidos val e n, são passados para
uma função na qual a posição de índice n do vetor tem seu valor substituído
por val. Se o valor de val já aparecia no vetor, a posição da sua ocorrência
anterior deve receber o valor da posição em que val será colocado. O vetor
alterado deve ser mostrado na função main. A função deve receber o vetor
através de um ponteiro para o primeiro elemento, e não devem ser usados
índices na manipulação. */

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
