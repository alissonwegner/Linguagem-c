/* 2. Leia um vetor de 100 n�meros reais (ponto flutuante). A partir deste vetor, crie outros dois, um para conter os n�meros maiores ou iguais � m�dia, 
e outro para os n�meros menores que a m�dia dos valores do vetor original. 
Estes dois vetores devem ser alocados dinamicamente e ter o menor tamanho poss�vel.*/
int tam(float x[10], float media);
float *insmenor(float x[10], int abaixo, float m);
float *insmaior(float x[10], int acima, float m);
/******************************************************************************************/
float media(float x[10] ){
	float cont;
	int i;
		//cont=x[0];
	for(i=0;i<10;i++){
		cont=cont+x[i];
	}
	cont= (cont/10);
	return cont;
	
}
/******************************************************************************************/
int tam(float x[10], float m){
	int i, t=0;
		printf("\nmedia func: %f", m);

		for(i=0;i<10;i++){
			if( x[i]<m){
				t++;
			}
	}
	return t;

}
/******************************************************************************************/
float *insmenor(float x[10], int abaixo, float m){
		int i;
	float *men;

		men = (float *) malloc (sizeof(float)* abaixo);
		for(i=0;i<10;i++){
			if( x[i]<m){
				*men = x[i];
				men++;
			}
	}
			printf("\nmenores %f \n", *men);
		

	return men;

}


/******************************************************************************************/

/*float *insmaior(float x[10], int acima, float m){
			int i;
	mai = (float *) malloc (sizeof(float)* acima);

		for(i=0;i<10;i++){
			if( x[i]<m){
				*mai= x[i];
				mai++;
			}
	}
	return mai;
	free(mai);
}*/
/******************************************************************************************/
int main(){
	float x[10]={4.2, 4.7, 6.5, 3.9, 8.5, 9.9, 3.1, 2.2, 5.2, 7.3};
	float m;
	int aux1, aux2, i, abaixo, acima;
	float *men, *mai;
	m=media( x);
	abaixo = tam(x, m);
	acima= (10-abaixo);

	men = insmenor(x, abaixo, m);
	//mai=insmaior(x, acima, m,);
	printf("\nmedia da main: %f", m);
	printf("\nmedia da abaixo: %d", abaixo);
	printf("\nmedia da acima: %d", acima);
	for(i=0;i<abaixo;i++){
		//printf("\nmenores %f \n", men);
	}
		for(i=0;i<acima;i++){
		printf("\nmaior %d \n", *mai);
	}
	free(men);
	free(mai);
}
