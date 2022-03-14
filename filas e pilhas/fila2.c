#include<stdio.h>
#include<stdlib.h>

struct elemento {
  int valor;
  struct elemento *prox;
  };

void incluir (struct elemento **inicio, struct elemento **fim, int valor) {
  struct elemento *novo;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  novo->prox = NULL;
  if (*fim) (*fim)->prox = novo;
  else *inicio = novo;
  *fim = novo;
  }

int excluir (struct elemento **inicio, struct elemento **fim) {
  int retorno;
  struct elemento *aux;
  if (*inicio) {
    retorno = (*inicio)->valor;
    aux = *inicio;
    *inicio = (*inicio)->prox;
    if (!(*inicio)) *fim = NULL;
    free (aux);
    return retorno;
    }
  return -1;
  }

void main(void) {
  int x=1, y;
  struct elemento *aux, *inicio, *fim;
  inicio = fim = NULL;
  while (x) {
    /* mostra situacao da fila */
    printf("Situacao atual da fila: < ");
    aux = inicio;
    while (aux != NULL) {
      printf("%d ", aux->valor);
      aux = aux->prox;
      }
    printf(">\n\n");
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
      incluir(&inicio, &fim, y);
      }
    else if (x == 2) {
      y = excluir(&inicio, &fim);
      if (y >= 0) printf("O valor do elemento retirado e %d\n", y);
      else printf("A fila esta vazia. Nao ha elemento para ser retirado!\n");
      }
    }
  }