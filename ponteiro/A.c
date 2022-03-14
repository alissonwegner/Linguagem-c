#include<stdio.h>
#include<stdlib.h>

main() {
  int *pi;
  char *pc;
  pi = (int *) malloc (sizeof(int));
  *pi = 321;
  pc = (char *) pi;
  printf("\n%d", *pi);
  printf("\n%c", *pi);
  printf("\n%d", *pc);
  printf("\n%d", *(pc+1));
  printf("\n%d", *(pc)+1);
  printf("\n%d", *(pi)+1);
  printf("\n%d", *(pi+1));
  free(pi);
  }
