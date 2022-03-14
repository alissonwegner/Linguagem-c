#include<stdio.h>
#include<stdlib.h>

main() {
  int *pi;
  char *pc;
  pi = (int *) malloc (sizeof(int));
  *pi = 321;         /* 321 na notação binária: 00000000 00000000 00000001 01000001
                        LE:                     01000001 00000001 00000000 00000000 */
  pc = (char *) pi;
  printf("\n%d", *pi);
  printf("\n%c", *pi);
  printf("\n%d", *pc);
  printf("\n%d", *(pc+1));
  printf("\n%d", *(pc)+1);
  printf("\n%d", *(pi)+1);
  printf("\n%d", *(pi+1));
  pi = (int *) (pc+1);
  printf("\n%d", *pi);
  free(pc);
  }


