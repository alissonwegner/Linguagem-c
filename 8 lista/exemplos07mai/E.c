#include<stdio.h>
#include<string.h>

main() {
  char s[4];
  int *q;
  strcpy(s, "pro");

  q = (int *) s;
  printf("\n%d - %d", q, *q);

  s[0] = 'A';
  s[1] = '\0';
  s[2] = '\0';
  s[3] = '\0';

  printf("\n%d - %d", q, *q);
  }

