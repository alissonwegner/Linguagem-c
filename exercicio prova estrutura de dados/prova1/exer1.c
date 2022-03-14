int func(int i){
    if(i<6){
    i=i+func(i+1);
    }
    else{
        i=i-2;
        return i;
}
void main(){
    int x=1;
printf("%d", func(x));

}


//bizu gabriel   for (ponteiro = inicio; i<=indice; i++, ponteiro = ponteiro->prox);