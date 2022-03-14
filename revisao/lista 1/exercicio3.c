#include<stdio.h>
/*3. Escreva um programa no qual seja chamada uma função que receba como parâmetro um ano e retorne 1 se o ano for bissexto, e 0 caso contrário. São bissextos todos os anos não seculares divisíveis por 4, e os seculares divisíveis por 400.*/
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
