/*Escrever um programa que leia uma matriz 5 x 5 e passe essa matriz como parâmetro para uma função, 
juntamente com um valor indicando uma coluna. 
A função deve retornar a posição (linha) do menor elemento da coluna indicada no parâmetro. 
O valor do elemento encontrado e seus índices devem ser exibidos na função main como resultado.*/
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


