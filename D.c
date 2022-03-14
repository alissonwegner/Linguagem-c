#include<stdio.h>

struct elemento {
    int v1;
    int v2;
    int v3;
    };

main() {
  struct elemento v, *p;
  int *q;
  v.v1 = 5;
  scanf ("%d", &v.v2);
  v.v3 = v.v1 * v.v2;
  p = &v;
  printf("%d - %d - %d", p->v1, p->v2, p->v3);  /* explicar o uso do -> */
  q = (int *) p;   /* daqui em diante, explicar a utilidade do tipo do ponteiro */
  printf("\n%d", *q);
  printf("\n%d - %d - %d", q[0], q[1], q[2]);
  }

