#include <stdio.h>

void inverter (char **a, char **b) {
  char *aux;
  printf ("\nSegundo: %s, %s", *a, *b);
  aux = *a;
  *a = *b;
  *b = aux;
  printf("\nTerceiro: %s, %s", *a, *b);
  }

int main(void) {
  char str1[20], str2[20];
  char *p1, *p2;
  strcpy(str1, "um");
  strcpy(str2, "dois");
  p1 = str1;
  p2 = str2;
  printf ("Primeiro: %s, %s", p1, p2);
  inverter(&p1, &p2);
  printf ("\nQuarto: %s, %s", p1, p2);
  }
