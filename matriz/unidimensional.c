#include <stdio.h>

#define MAX 6
#define NORIGINAL 40

struct dupla {
  int indice;
  int valor;
  } matriz[MAX];

int consultar(int indice) {
  int a;
  for (a=0; matriz[a].indice < indice && matriz[a].indice != -1 && a < MAX-1; a++);
 /* Na linha acima, a < MAX - 1 para parar no ultimo, e nao passar para o endereco seguinte */
  if (matriz[a].indice == indice) return matriz[a].valor;
  else return 0;
  }

void alterar(int indice, int val){
  int a, b;
  for (a=0; matriz[a].indice < indice && matriz[a].indice != -1 && a < MAX-1; a++);
  /* Na linha acima, a < MAX - 1 para parar no ultimo, e nao passar para o endereco seguinte
   (e melhor parar no ultimo e testar abaixo do que parar num local que pode ter um valor
   qualquer) */
  /* Se encontrou o elemento na representação da esparsa */
  if (matriz[a].indice == indice) {
    /* se o valor a ser colocado for != 0, basta substituir o antigo */
    if (val) matriz[a].valor = val;
    /* se o valor a ser colocado for 0, basta eliminar o elemento */
    else {
      for (;matriz[a].indice != -1 && a<MAX-1; a++) matriz[a] = matriz[a+1];
      if (a == MAX-1) matriz[a].indice = -1;  /* se deslocou ate o ultimo,
                     e possivel que ele nao tivesse o valor -1 no indice */
      }
    }
  /*Se não encontrou o elemento na representação da esparsa*/
  else
  /*se o valor for 0, nao faco nada, se for != 0 devo abrir espaco para o valor */
    if (val) {
      for (b = a; matriz[b].indice != -1; b++);  /* nao considero a possibilidade
      de extrapolar (colocar "&& b < MAX"), pois neste caso o enunciado estaria errado */
      for (; b>a; b--) matriz[b] = matriz[b-1];
      matriz[a].indice = indice;
      matriz[a].valor = val;
      }
  }

void exibir(void) {
  int a, b, inicio, fim;
  inicio = 0;
  for (a = 0; a < MAX && matriz[a].indice!=-1; a++) {
    fim = matriz[a].indice;
    for (b = inicio; b<fim; b++) printf("0 ");
    printf("%d ", matriz[a].valor);
    inicio = matriz[a].indice + 1;
    }
  for (b = inicio; b<NORIGINAL; b++) printf("0 ");
  printf("\n\n");
  for (a = 0; a < MAX; a++) printf("%d\t", matriz[a].indice);
  printf("\n");
  for (a = 0; a < MAX; a++) printf("%d\t", matriz[a].valor);
  printf("\n\n");
  }

int ler_indice(void) {
  int i;
  printf("Digite o indice:\n");
  scanf ("%d", &i);
  while (i >= NORIGINAL || i < 0) {
    printf("O indice deve estar entre 0 e %d. Digite outro indice:\n", NORIGINAL-1);
    scanf ("%d", &i);
    }
  return i;
  }

void main(void) {
/* INICIALIZACAO */
int opcao, i, valor;
for (i = 0; i<MAX; i++) {
  matriz[i].indice = -1;
  matriz[i].valor = 0;
  }
/* SELECAO DAS FUNCOES */
do {
  exibir();
  printf ("0 - Sair do programa\n");
  printf ("1 - Alterar Valor\n");
  printf ("2 - Consultar valor\n");
  printf ("3 - Exibir conteudo do vetor\n");
  scanf ("%d", &opcao);
  if (opcao==1) {
    i = ler_indice();
    printf("Digite o novo valor da posição:\n");
    scanf ("%d", &valor);
    alterar(i, valor);
    }
  else if (opcao == 2) {
    i = ler_indice();
    printf ("O valor da posicao %d e %d\n", i, consultar(i));
    }
  else if (opcao == 3) exibir();
  } while (opcao);
}