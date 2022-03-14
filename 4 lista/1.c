/*Escreva um programa que leia as probabilidades que 10 indivíduos têm de serem selecionados em um processo. 
Para ilustrar a ideia, imagine, por exemplo, uma rifa em que um indivíduo comprou 22% dos números, 
outro comprou 8%, e assim por diante, de modo que os 100% fiquem divididos entre os 10. 
Os indivíduos são numerados de 0 a 9, conforme o índice no vetor da posição que contém cada probabilidade. 
Escreva um programa que faça o sorteio de um indivíduo, de modo que as probabilidades sejam respeitadas.*/
#include <stdio.h>
#include <time.h>
int func(int vet[], int r){
	int v, cont, i;
	cont =vet[0];
	if(r<cont){
		return 1;
	}
	else{
	
	for(i;cont<=r;i++){
	cont = vet[i];
	v++;
}
return v;
}
}
int main(){
  int v2, r, i, a=0, i2=0;
   srand((unsigned) time(NULL) );
  int vet[10];//={ 22, 8, 10, 15, 5, 21, 6, 3, 13, 7};
   	printf("informe a porcentagem do usuario tem de chance:");
  for(i=0;i<10;i++){
 
  	scanf ("%d", &a);
 	vet[i]=a+i2;
 	i2 = vet[i];
 }
  r = rand() % 101;
  printf("\nr:  %d", r);

  v2 = func(vet, r);

printf("\no ganhador e o jogador  %d", v2);

}
