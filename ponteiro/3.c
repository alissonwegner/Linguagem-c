#include<stdio.h>
main () {
  int x, y, *P1, *P2;
  x = 13;		/*atribui��o 1*/
  y = 14;		/*atribui��o 2*/
  P1 = &x;
  P2 = P1;		/*atribui��o 3*/
  printf("\n%d, %d", *P1, *P2);
  *P2 = 16;
  printf ("\n%d, %d", *P1, *P2);
  P2 = &y;
  *P1 = *P2;		/*atribui��o 4*/
  printf("\n%d, %d", *P1, *P2);
  x = 16;
  printf("\n%d, %d", *P1, *P2);
  }
