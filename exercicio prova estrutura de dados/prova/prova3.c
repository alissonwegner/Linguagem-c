struct elemento *eliminar (struct elemento *inicio) {
  struct elemento *aux, *aux2;
  if (!inicio || inicio->prox == inicio) {
    return inicio;
    }//teste para ver se tem mais de um inicio
  aux = inicio->prox;
  for(aux; aux->prox->prox != inicio; aux = aux->prox);
    aux2->prox = aux->prox;
    free(aux2);
    aux->prox = inicio ->prox; 
    aux = inicio->prox;
    free(inicio);
  return aux;
  }