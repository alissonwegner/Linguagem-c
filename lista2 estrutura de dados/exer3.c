/*3. Construa uma função que receba como parâmetro dois ponteiros que apontam para elementos de uma
lista circular com encadeamento simples. A função deve trocar de posição os dois elementos.*/
#include<stdlib.h>
#include<stdio.h>
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
      void troca (struct elemento *p1, struct elemento *p2){
         struct elemento *aux;
          struct elemento*a1; 
          struct elemento*a2;
           //printf("\np1: %d ", p1->valor);
           //printf("\np2: %d ", p2->valor);
           a2=p2;
           a1=p1;
           for(a1;a1->prox != p1;a1=a1->prox);
           for(a2;a2->prox != p2;a2=a2->prox);

           aux=p1->prox;
           p1->prox=p2->prox;
           p2->prox=aux;
           a2->prox=p1;
           a1->prox=p2;
           printf("\np1: %d ", p1->valor);
           printf("\np2: %d ", p2->valor);
           // printf("\na1: %d ", a1->valor);
         //  printf("\na2: %d ", a2->valor);

           }


  



/***********************************************************/

main(void) {
  struct elemento *inicio;
  inicio = NULL;
   struct elemento *p1, *p2, *ini;
ini=inicio;
  inicio = inserirCirc(inicio, 9);
  inicio = inserirCirc(inicio, 6);
  p1=inicio;

  inicio = inserirCirc(inicio, 4);
  inicio = inserirCirc(inicio, 2);
    p2=inicio;
  printf("\n");

          exibirCirc(inicio);
  printf("\n");
troca(p1, p2);

  printf("\n");

          exibirCirc(inicio);
  printf("\n");

            printf("\np1: %d", p1->valor);
           printf("\np2: %d ", p2->valor);
             printf("\n");

          exibirCirc(inicio);

           eliminarCirc(inicio);


  
  printf("\n");
 // exibirCirc(inicio);


  }
