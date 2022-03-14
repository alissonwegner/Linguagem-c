
#include <stdio.h>
void inverter(int *, int *);
main() {
  int x = 5, y = 6;
  printf ("Primeiro: %d, %d", x, y);
  inverter(&x, &y);
  printf ("\nQuarto: %d, %d", x, y);
  }
void inverter (int *a, int *b) {
  int aux;
  printf ("\nSegundo: %d, %d", *a, *b);
  aux = *a;
  *a = *b;
  *b = aux;
  printf ("\nTerceiro: %d, %d", *a, *b);
  }
