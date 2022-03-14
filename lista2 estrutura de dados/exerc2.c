#include<stdio.h>
#include<stdlib.h>
/**************** Struct *************************/

struct elemento {
  int valor;
  struct elemento *prox;
  };

/**************** funcoes para lista encadeada CIRCULAR *************************/

void eliminarCirc (struct elemento *inicio) {
  if (inicio != NULL) {
    struct elemento *aux, *aux2;
    aux2 = inicio;
    do {
      aux = aux2;
      aux2 = aux2->prox;
      free(aux);
      } while (aux2 != inicio);
    }
  }

void exibirCirc (struct elemento *inicio) {
  if (inicio != NULL) {
    struct elemento *aux;
    aux = inicio;
    do {
      printf("%d ", aux->valor);
      aux = aux->prox;
      } while (aux != inicio);
    }
  }

struct elemento *inserirCirc (struct elemento *inicio, int valor) {
  struct elemento *novo, *aux;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  if (inicio != NULL) {
    novo->prox = inicio;
    for(aux = inicio; aux->prox != inicio; aux = aux->prox);
    aux->prox = novo;
    }
  else {
    novo->prox = novo;
    }
  return novo;
  }
struct elemento *comparar (struct elemento *inicio, struct elemento *inicio2){
      if (inicio != NULL && inicio2 != NULL) {
    struct elemento *aux, *aux2;
    aux = inicio;
    aux2 = inicio2;
    do {
        if(aux->valor != aux2->valor){
            return (0);
        }
      aux = aux->prox;
      aux2 = aux2->prox;

      } while (aux != inicio || aux2 != inicio2);
      return (1);
    }
};

/***********************************************************/

main(void) {
  struct elemento *inicio;
  inicio = NULL;
   struct elemento2 *inicio2;
   inicio2 = NULL;

  inicio = inserirCirc(inicio, 9);
  inicio = inserirCirc(inicio, 6);
  inicio = inserirCirc(inicio, 4);
  inicio = inserirCirc(inicio, 2);
  inicio2 = inserirCirc(inicio2, 9);
  inicio2 = inserirCirc(inicio2, 5);
  inicio2 = inserirCirc(inicio2, 4);
  inicio2 = inserirCirc(inicio2, 2);
int valor;
  valor = comparar(inicio, inicio2);
  if(valor == 0){
      printf("As listas nao sao iguais\n");
  }else{
            printf("As listas sao iguais\n");
 }


          exibirCirc(inicio);
  printf("\n");

          exibirCirc(inicio2);
           eliminarCirc(inicio2);
           eliminarCirc(inicio);

  
  printf("\n");
 // exibirCirc(inicio);


  }