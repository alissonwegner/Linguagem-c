#include<stdio.h>
/*3. Escreva um programa no qual seja chamada uma fun��o que receba como par�metro um ano e retorne 1 se o ano for bissexto, e 0 caso contr�rio. S�o bissextos todos os anos n�o seculares divis�veis por 4, e os seculares divis�veis por 400.*/
	funcao(ano){
	int resto;
	resto = ano%4;
		if (resto == 0)
		return (1);
		else
		return (0);
}
int main(){
	int ano, x;
		printf("informe o ano\n");
		scanf("%d", &ano);
		x = funcao(ano);
		if(x == 1)
		printf("\n bissexto");
		else
		printf("\n nao e bissexto");
}
