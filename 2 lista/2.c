/*Escrever um programa que leia uma matriz 5 x 5 e passe essa matriz como par�metro para uma fun��o, 
juntamente com um valor indicando uma coluna. 
A fun��o deve retornar a posi��o (linha) do menor elemento da coluna indicada no par�metro. 
O valor do elemento encontrado e seus �ndices devem ser exibidos na fun��o main como resultado.*/
#include<stdio.h>
#define TAM 5
int funcao(int mat[][TAM], int val) {
	int m, n, menor, linha;
	n = val-1;
	menor = mat[0][n];
		for(m=0; m < TAM; m++)
		if(mat[m][n]<menor){
            menor=mat[m][n];
            linha = m;
}
linha++;
 return linha;
    }

int main(){
		int linha, val, m, n, mat[TAM][TAM];
	
	printf ("informe o valor:");
	scanf("%d", &val);
	
		for(m=0;m<TAM;m++){
			for(n=0;n<TAM;n++){
			
			printf("informe o valor da matriz %d %d:", m+1, n+1);
			scanf("%d", &mat[m][n]);
		}
	}
			linha= funcao(mat, val);
			printf("A linha com o menor valor e %d\n", linha);

}


