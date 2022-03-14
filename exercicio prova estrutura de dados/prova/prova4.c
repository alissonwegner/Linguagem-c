4: struct elemento *divideIgualitario(struct elemento *lista) {
    struct elemento *valorRecebido, *aux, *aux2;
    int cont = 0;

    valorRecebido = lista;
    for(aux = lista; aux != NULL; aux = aux->prox, cont++);
    cont = cont/2;//considera apenas a parte inteira
    for(aux = lista;  cont > 0; aux = aux->prox, cont--);
    aux2 = aux->prox;
    aux->prox = NULL;
    aux2->ant = NULL;

    if(aux2->valor != valorRecebido)
        return aux2;
    return aux2->prox;
}