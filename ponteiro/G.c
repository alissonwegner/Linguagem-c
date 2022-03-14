#include<stdio.h>

main() {
  int tam, val, i, j;
  int **mat;
  printf("Digite a dimensao da matriz: ");
  scanf ("%d", &tam);

  mat = (int **) malloc(sizeof(int *) * tam);

  for (i = 0; i < tam; i++)
    mat[i] = (int *) malloc(sizeof(int) * tam);

  for (i = 0; i < tam; i++)
    for (j = 0; j < tam; j++)
      mat[i][j] = 0;

  /* ... */

  printf ("Digite o valor a colocar na matriz: ");
  scanf ("%d", &val);

  printf ("Digite a posicao (linha e coluna): ");
  scanf ("%d", &i);
  scanf ("%d", &j);

  mat[i][j] = val;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++)
      printf("%d  ", mat[i][j]);
    printf("\n");
    }

  for (i = 0; i < tam; i++)
    free(mat[i]);
  free(mat);

  }

