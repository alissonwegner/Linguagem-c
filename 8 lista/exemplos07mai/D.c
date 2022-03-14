#include <stdio.h>

struct elemento {
    int v1, v2, v3;
    };

main() {
  struct elemento v, *p;
  int *q;
  v.v1 = 10;
  scanf ("%d", &v.v2);  /* 7 */
  v.v3 = v.v1 * v.v2;   /* 35  */
  p = &v;
  printf("%d - %d - %d", p->v1, p->v2, p->v3);
  q = (int *) p;
  printf("\n%d", *q);
  printf("\n%d - %d - %d", q[0], q[1], q[2]);
  printf("\n%d - %d - %d", *q, *(q+1), *(q+2));
  }
