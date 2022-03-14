#include<stdio.h>
#include<stdlib.h>

struct elemento {
  int valor;
  struct elemento *prox;
  };

/**************** funcoes para lista encadeada NAO circular *************************/

struct elemento *inserir (struct elemento *inicio, int valor) {
  struct elemento *novo;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  novo->prox = inicio;
  return novo;
  }

void exibir (struct elemento *aux) {
  while (aux != NULL) {
    printf("%d ", aux->valor);
    aux = aux->prox;
    }
  }

void eliminar (struct elemento *inicio) {
  struct elemento *aux;
  while (inicio != NULL) {
    aux = inicio;
    inicio = inicio->prox;
    free(aux);
    }
  }

/**************** torna circular *************************/

void tornaCircular(struct elemento *inicio) {
  if (inicio) {
    struct elemento *aux;
    for(aux = inicio; aux->prox != NULL; aux = aux->prox);
    aux->prox = inicio;
    }
  }

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

struct elemento *eliminarPenultimo (struct elemento *inicio) {
  struct elemento *aux, *aux2;
  if (!inicio || inicio->prox == inicio) {
    return inicio;
    }
  if (inicio->prox->prox == inicio) {
    aux = inicio->prox;
    aux->prox = aux;
    free(inicio);
    return aux;
    }
  for(aux = inicio; aux->prox->prox != inicio; aux2 = aux, aux = aux->prox);
  aux2->prox = aux->prox;
  free(aux);
  return inicio;
  }
  struct elemento *eliminar (struct elemento *inicio) {
  struct elemento *aux, *aux2;
  if (!inicio || inicio->prox == inicio) {
    return inicio;
    }//teste para ver se tem mais de um inicio
  aux = inicio;
  for(aux; aux->prox->prox != inicio; aux = aux->prox);
    aux2->prox = aux->prox;
    free(aux2);
    aux->prox = inicio ->prox;
    
    aux = inicio;
    free(inicio);
  return aux;
  }

main(void) {
  struct elemento *inicio;
  inicio = NULL;
  inicio = inserir(inicio, 1);
  inicio = inserir(inicio, 3);
  inicio = inserir(inicio, 5);
  inicio = inserir(inicio, 7);
  exibir(inicio);
  printf("\n");

  tornaCircular(inicio);

  inicio = inserirCirc(inicio, 9);
  inicio = inserirCirc(inicio, 6);

  exibirCirc(inicio);
  printf("\n");



  inicio = eliminar(inicio);
  exibirCirc(inicio);
  
  printf("\n");

  eliminarCirc(inicio);
  }