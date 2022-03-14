/* vale a pena retornar ponteiro de string ??? */
#include <stdio.h>

char *func(char *s, char *s2) {
  char *ini;
  ini = s2;
  for(; *s != '\0'; s++, s2++)
    *s2 = *s;
  *s2 = '\0';
  return ini;
  }

int main(void) {
  char str1[20], str2[20];
  printf("Digite uma string: ");
  scanf ("%s", str1);
  printf("%s, %s", func(str1, str2), str2);
  }
