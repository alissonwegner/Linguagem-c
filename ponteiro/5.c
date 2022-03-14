#include<stdio.h>
main() {
  int i, v=9, w=5, x=4;
  int y=7, z=13, *vet[5];
  vet[0] = &v;
  vet[1] = &w;
  vet[2] = &x;
  vet[3] = &y;
  vet[4] = &z;  /* linha 9 */
  z = *vet[3];
  vet[0] = vet[1];
  *vet[0] = x;
  for (i=0; i<5; i++)
    printf("%d ", *vet[i]);
  }
