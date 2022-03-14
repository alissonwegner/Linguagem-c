#include <stdio.h>

#define MAX 8
#define DORIGINAL 20 // dimensao da matriz original - ela deve ser quadrada

struct tripla {
  int l;
  int c;
  int valor;
  } matriz[MAX];

int consultar(int linha, int coluna) {
  int a;
  for (a=0;
  (matriz[a].l < linha || (matriz[a].l==linha && matriz[a].c<coluna)) && matriz[a].l != -1 && a < MAX-1; a++);
  /* Na linha acima, a < MAX - 1 para parar no ultimo, e nao passar para o endereco seguinte
   (e melhor para no ultimo e testar abaixo do que parar num local que pode ter um valor
   qualquer) */
  if (matriz[a].l == linha && matriz[a].c == coluna) return matriz[a].valor;
  else return 0;
  }

void alterar(int linha, int coluna, int val){
  int a, b;
  for (a=0; (matriz[a].l < linha || (matriz[a].l==linha && matriz[a].c<coluna)) && matriz[a].l != -1 && a < MAX-1; a++);
  /* Na linha acima, a < MAX - 1 para parar no ultimo, e nao passar para o endereco seguinte
   (e melhor para no ultimo e testar abaixo do que parar num local que pode ter um valor
   qualquer) */
  /* Se encontrou o elemento na representação da esparsa */
  if (matriz[a].l == linha && matriz[a].c == coluna) {
    /* se o valor a ser colocado for != 0, basta substituir o antigo */
    if (val) matriz[a].valor = val;
    /* se o valor a ser colocado for 0, basta eliminar o elemento */
    else {
      for (;matriz[a].l != -1 && a<MAX-1; a++) matriz[a] = matriz[a+1];
      if (a == MAX-1) matriz[a].l = -1;  /* se deslocou ate o ultimo,
                     e possivel que ele nao tivesse o valor -1 no indice */
      }
    }
  /*Se não encontrou o elemento na representação da esparsa*/
  else
  /*se o valor for 0, nao faco nada, se for != 0 devo abrir espaco para o valor */
    if (val) {
      for (b = a; matriz[b].l != -1; b++);  /* nao considero a possibilidade
      de extrapolar (colocar "&& b < MAX"), pois neste caso o enunciado estaria errado */
      for (; b>a; b--) matriz[b] = matriz[b-1];
      matriz[a].l = linha;
      matriz[a].c = coluna;
      matriz[a].valor = val;
      }
  }

void exibir_l(int linha) {
  int a, b, inicio, fim;
  for (a=0; matriz[a].l < linha && matriz[a].l != -1 && a < MAX; a++);
  if (matriz[a].l==-1 || matriz[a].l>linha || a==MAX) for (b=1; b<=DORIGINAL; b++) printf("0 ");
  else {
    inicio = 0;
    for (; a < MAX && matriz[a].l == linha; a++) {
      fim = matriz[a].c;
      for (b = inicio; b<fim; b++) printf("0 ");
      printf("%d ", matriz[a].valor);
      inicio = matriz[a].c + 1;
      }
    fim = DORIGINAL;
    for (b = inicio; b<fim; b++) printf("0 ");
    }
  }

void exibir(void) {
  int i;
  for (i = 0; i<DORIGINAL; i++) {
    exibir_l(i);
    putchar('\n');
    }
  printf("\n\n");
  for (i = 0; i < MAX; i++) printf("%d\t", matriz[i].l);
  printf("\n");
  for (i = 0; i < MAX; i++) printf("%d\t", matriz[i].c);
  printf("\n");
  for (i = 0; i < MAX; i++) printf("%d\t", matriz[i].valor);
  printf("\n\n");
  }

int ler_indice(int qual) {
  int i;
  if (qual == 1) printf("Digite o indice da linha:\n");
  else if (qual == 2) printf("Digite o indice da coluna:\n");
  scanf ("%d", &i);
  while (i >= DORIGINAL || i < 0) {
    printf("O indice deve estar entre 0 e %d. Digite novamente:\n", DORIGINAL-1);
    scanf ("%d", &i);
    }
  return i;
  }

void main(void) {
/* INICIALIZACAO */
int opcao, i, j, valor;
for (i = 0; i<MAX; i++) {
  matriz[i].l = -1;
  matriz[i].c = -1;
  matriz[i].valor = 0;
  }
/* SELECAO DAS FUNCOES */
do {
  putchar('\n');
  putchar('\n');
  putchar('\n');
  exibir();
  putchar('\n');
  printf ("0 - Sair do programa\n");
  printf ("1 - Alterar Valor\n");
  printf ("2 - Consultar valor\n");
  printf ("3 - Exibir uma linha\n");

  scanf ("%d", &opcao);
  if (opcao==1) {
    i = ler_indice(1);
    j = ler_indice(2);
    printf("Digite o novo valor da posição:\n");
    scanf ("%d", &valor);
    alterar(i, j, valor);
    }
  else if (opcao == 2) {
    i = ler_indice(1);
    j = ler_indice(2);
    printf ("O valor da posicao [%d, %d] e %d", i, j, consultar(i, j));
    }
  else if (opcao == 3) {
    i = ler_indice(1);
    exibir_l(i);
    }

  } while (opcao);
}