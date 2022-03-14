#include <stdio.h>
#include <stdlib.h>

int d1, d2;

int armazena(int valor, int i, int j, int *vet);

void main (void) {
  int a, b, c, *p;
  printf("Digite a primeira dimensão da matriz (linhas): ");
  scanf ("%d", &d1);
  printf("Digite a segunda dimensão da matriz (colunas): ");
  scanf ("%d", &d2);
  p = (int *) malloc (d1 * d2 * sizeof(int));
  /* inicializacao - facilita a verificacao */
  for (a=(d1*d2)-1; a>=0; a--) p[a] = 0;
  /* fim da parte que facilita a verificacao */
  printf("Digite o valor a ser armazenado (ou zero para sair): ");
  scanf ("%d", &a);
  while (a) {
    printf("Digite o primeiro índice: ");
    scanf ("%d", &b);
    printf("Digite o segundo índice: ");
    scanf ("%d", &c);
    if (a) {
      if (armazena(a, b, c, p)) printf("Valor armazenado.\n");
      else printf("Posicao invalida.\n");
      }
    printf("Digite o valor a ser armazenado (ou zero para sair): ");
    scanf ("%d", &a);
    }/* mostrar para conferir */
  for (a=0; a<d1*d2; a++) {
    printf("%d  ", p[a]);
    if (!((a+1)%d2)) putchar('\n');
    }/* fim da parte que mostra */
  free(p);
  }

int armazena(int valor, int i, int j, int *vet) {
  int l;
  if (i >= 0 && i < d1 && j >= 0 && j < d2) {
    l = (d2 * i) + j;
    vet[l] = valor;
    return 1;
    }
  return 0;
  }
