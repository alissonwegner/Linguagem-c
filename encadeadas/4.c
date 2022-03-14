void Eliminar_duplicados(struct elemento *lista){
  struct elemento *prim, *teste, *ant
  if(lista){
    prim = lista;
    do{
      teste = prim->prox;
      ant = prim;
      while (teste)
          if(teste->valor== prm->valor){
            ant->prox = teste->prox;
            free(teste);
            teste = ant->prox;
          }
          else{
            ant = ant->prox;
            teste = teste->prox;
          }
          prim = prim->prox;
            while(prim)
    }
  }
}
