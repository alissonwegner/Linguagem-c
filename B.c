#include <stdio.h>
#include <stdlib.h>

main() {
  int x, y, *p, *r;
  char *q;
  printf("Informe quantos elementos deve ter o vetor: ");
  scanf ("%d", &x);
  p = (int *) malloc (sizeof(int) * x);
  for (y = 0; y < x; y++)
    *(p+y) = y;
  for (y = 0; y < x; y++)
    printf("%d ", p[y]);
  printf("\n\n");
  for (q = (char *) p, y = 0; y < x*4; y++)
    printf("%d ", q[y]);
  printf("\n\n");
  for (r = (int *) (q+1), y = 0; y < x; y++)
    printf("%d ", r[y]);
  free(p);
  }
