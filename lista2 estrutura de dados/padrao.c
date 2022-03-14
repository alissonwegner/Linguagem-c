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
/**************** eliminar valor *************************/






/***********************************************************/

main(void) {
  struct elemento *inicio;
  inicio = NULL;
 
  inicio = inserirCirc(inicio, 9);
  inicio = inserirCirc(inicio, 6);

 int valor, x;

  while(valor !=0){
  printf("\n");
  printf("\n******************menu******************\n");
  printf("\n");

  printf("digite 1 para salvar novo valor\n");
  printf("digite 2 para excluir valor \n");
  printf("digite 3 para apagar toda lista\n");
  printf("digite 4 para exibir toda a lista\n");
  printf("digite 0 para sair\n");
  scanf("%d", &valor);
  printf("\nvalor digitado %d\n", valor);
  printf("*********************************************\n");
        if(valor == 0){
        return 0;
        }
        if (valor == 1){
          printf("Qual valor:\n");
          scanf("%d", &x);
          inicio = inserirCirc(inicio, x);
        }
        if (valor == 2){
        }
        if (valor == 3){
           eliminarCirc(inicio);

        }
        if (valor == 4){

          exibirCirc(inicio);
           printf("\n");

        }
  }






  
  printf("\n");
eliminarCirc(inicio);
 // exibirCirc(inicio);


  }