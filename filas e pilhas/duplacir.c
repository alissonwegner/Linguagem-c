#include<stdio.h>
#include<stdlib.h>

struct elemento {
  int valor;
  struct elemento *ant;
  struct elemento *prox;
  };

struct elemento *inserirInicio (struct elemento *lista, int valor) {
  struct elemento *novo;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  novo->ant = NULL;
  if (lista) {
    while(lista->ant != NULL) {
      lista = lista->ant;
      }
    lista->ant = novo;
    }
  novo->prox = lista;
  return novo;
  }

struct elemento *inserirOrdenada (struct elemento *lista, int valor) {
  struct elemento *novo;
  novo = (struct elemento *) malloc (sizeof (struct elemento));
  novo->valor = valor;
  if (valor < lista->valor) {
    while(valor < lista->valor && lista->ant) {
      lista = lista->ant;
      }
    if (valor < lista->valor) {
      novo->ant = NULL;
      novo->prox = lista;
      lista->ant = novo;
      }
    else {
      novo->ant = lista;
      novo->prox = lista->prox;
      lista->prox = novo;
      if (novo->prox)
        novo->prox->ant = novo;
      }
    }
  else {    // equivale a if (valor > lista->valor)
    while(valor > lista->valor && lista->prox) {
      lista = lista->prox;
      }
    if (valor > lista->valor) {
      novo->ant = lista;
      novo->prox = NULL;
      lista->prox = novo;
      }
    else {
      novo->ant = lista->ant;
      novo->prox = lista;
      lista->ant = novo;
      if (novo->ant)
        novo->ant->prox = novo;
      }
    }
  return novo;
  }

void exibir(struct elemento *lista) {
  if (lista) {
    while(lista->ant != NULL) {
      lista = lista->ant;
      }
    while(lista != NULL) {
      printf("%d ", lista->valor);
      lista = lista->prox;
      }
    }
  }

void eliminar(struct elemento *lista) {
  struct elemento *aux, *a2;
  if (lista) {
    aux = lista->ant;
    while(aux != NULL) {
      a2 = aux;
      aux = aux->ant;
      free(a2);
      }
    while(lista != NULL) {
      a2 = lista;
      lista = lista->prox;
      free(a2);
      }
    }
  }

main(void) {
  struct elemento *lista, *aux;
  lista = NULL;
  lista = inserirInicio(lista, 8);
  exibir(lista);
  printf("\n");
  lista = inserirInicio(lista, 6);
  exibir(lista);
  printf("\n");
  lista = inserirInicio(lista, 4);
  exibir(lista);
  printf("\n");
  lista = inserirInicio(lista, 2);
  exibir(lista);
  printf("\n");
  lista = inserirOrdenada(lista, 5);
  exibir(lista);
  printf("\n");
  lista = inserirOrdenada(lista, 1);
  exibir(lista);
  printf("\n");
  lista = inserirOrdenada(lista, 9);
  exibir(lista);
  printf("\n");

  eliminar(lista);
  }