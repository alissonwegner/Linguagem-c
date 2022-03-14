#include<stdlib.h>
#include<stdio.h>

main() {
  int a, *p;
  p = &a;
  scanf("%d", p);
  printf("%d", *p);
  }

/*
main() {
  int *p;
  p = malloc(4);
  scanf("%d", p);
  printf("%d", *p);
  }
*/
