#include<stdio.h>
#include<stdlib.h>

struct elemento {
  int valor;
  struct elemento *prox;
  } *topo;

void empilhar (int valor) {
  struct elemento *novo;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  novo->prox = topo;
  topo = novo;
  }

int desempilhar (void) {
  int retorno;
  struct elemento *aux;
  if (topo) {
    retorno = topo->valor;
    aux = topo;
    topo = topo->prox;
    free (aux);
    return retorno;
    }
  return -1;   /* -1 e indicador de erro */
  }

main(void) {
  int x=1, y;
  struct elemento *aux;
  topo = NULL;
  while (x) {
    /* mostra situacao da pilha */
    printf("Situacao atual da pilha: TOPO < ");
    aux = topo;
    while (aux != NULL) {
      printf("%d ", aux->valor);
      aux = aux->prox;
      }
    printf("> BASE\n\n");
    /*fim da parte que mostra situacao da fila*/
    printf("Selecione uma opcao:\n");
    printf("0 - Sair do programa\n");
    printf("1 - Incluir um valor\n");
    printf("2 - Excluir um valor\n");
    scanf("%d", &x);
    if (x == 1) {
      printf("Digite um numero nao negativo para incluir: ");
      scanf("%d", &y);
      while (y < 0) {
        printf("Digite um NAO NEGATIVO para incluir:\n");
        scanf("%d", &y);
        }
      empilhar(y);
      }
    else if (x == 2) {
      y = desempilhar();
      if (y >= 0) printf("O valor do elemento retirado e %d\n", y);
      else printf("A fila esta vazia. Nao ha elemento para ser retirado!\n");
      }
    }
  }