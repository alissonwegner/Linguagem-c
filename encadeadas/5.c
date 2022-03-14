struct elemento *mescla(struct elemento *prim, struct elemento *seg){
  struct elemento *aux, *retorno;
  if(prim && seg){
    if(prim->valor<=seg->valor){
      retorno = prim;
      prim = prim->prox;
    }
else{
  renotno =seg;
  seg = seg->prox;
}
aux = retorno;
while(prim && seg){
  if (prim->valor<=seg->valort){
    aux->prox = prim;
    prim = prim->prox;
  }
else{
  aux->prox = seg;
  seg = seg->prox;
}
aux = aux->prox;
}
if(prim) aux->prox = prim;
else aux->prox = seg;
return retorno;
  }
  else if(prim) return prim;
  else return seg;
}
