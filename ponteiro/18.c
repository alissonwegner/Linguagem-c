/* constante NULL */
#include <stdio.h>

int main(void) {
  char *p;
  if (p)
    printf("%s", p);
  p = NULL;
  if (p)
    printf("%s", p);
  else
    printf("Ponteiro nulo.");
  }
