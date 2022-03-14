int compara(struct elemento *p1,struct elemento *seg){
  //verifica quantos elementos de p1 tem copias em seg
  int cont = 0;
  struct elemento *p2;
  while (p1){
    p2 = seg;
    while(p2)
    if(p2->valor== p1->valor){
      cont++;
      p2=NULL
    }
    else p2 = p2->prox;
    p1 = p1->prox;
  }
  return cont;
}
