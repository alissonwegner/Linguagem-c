#include <stdio.h>
main(void) {
   int v[5] = {1, 2, 3, 4, 5};
   int *p, t;
   p = v;
   for (t=0; t<5; t++) printf("%d", v[t]);
   printf("\n");
   for (t=0; t<5; t++) printf("%d", p[t]);
   printf("\n");
   for (t=0; t<5; t++) printf("%d", *(p+t));
   printf("\n");
   for (t=0; t<5; t++, p++) printf("%d", *p);
   printf("\n");
   }
