struct elemento *copia(struct elemento *origem){
  struct elemento *p1 = NULL, *aux,*retorno = NULL;
  while(origem){
    aux = (struct eleento *) malloc(sizeof(struct elemento));
    aux->valor = origem->valor;
    aux->prox = NULL;
    if(p1) p1->prox = aux;
    else retorno = aux;
    p1 = aux;
    origem = origem->prox;
  }
  return retorno;
}
