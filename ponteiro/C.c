#include<stdio.h>
#include<stdlib.h>
struct aluno {
  int mat;
  float n1, n2;
  };
void main(void) {
  struct aluno *pont;
  float media;
  pont = (struct aluno *) malloc(sizeof(struct aluno));
  printf("\nDigite a matricula do aluno: ");
  scanf("%d", &(pont->mat));
  printf("Digite a primeira nota: ");
  scanf("%f", &(pont->n1));
  printf("Digite a segunda nota: ");
  scanf("%f", &(pont->n2));
  media = (pont->n1 + pont->n2) / 2;
  printf("\nA média do aluno de matricula %d é %f", pont->mat, media);
  free (pont);
  }

