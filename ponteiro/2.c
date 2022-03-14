#include <stdio.h>
main() {
  int var, *pi;
  short int *psi;
  char *pc;
  printf ("%d, %d, %d", sizeof(int), sizeof(short int), sizeof(char));
  var = 66051;   // em binario,   1 00000010 00000011
  pc = (char *) &var;
  psi = (short int *) &var;
  pi = &var;
  printf ("\n%d, %d, %d, %d", *(pc), *(pc+1), *(pc+2), *(pc+3));
  printf ("\n%d, %d, %d", *pi, *psi, *pc);
  }
