#include<stdio.h>

main() {
  int tam, val, i, j;
  int *mat;

  printf("Digite a dimensao da matriz: ");
  scanf ("%d", &tam);
  mat = (int *) malloc(sizeof(int) * tam * tam);
  for (i = 0; i < tam*tam; i++)
    mat[i] = 0;

  /* ... */

  printf ("Digite o valor a colocar na matriz: ");
  scanf ("%d", &val);

  printf ("Digite a posicao (linha e coluna): ");
  scanf ("%d", &i);
  scanf ("%d", &j);

  mat[i*tam+j] = val;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++)
      printf("%d  ", mat[i*tam+j]);
    printf("\n");
    }

  printf("\n");

  for (i = 0; i < tam*tam; i++) {
    if (i%tam == 0) printf("\n");
    printf("%d  ", mat[i]);
    }

  free(mat);

  }

