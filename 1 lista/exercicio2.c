#include<stdio.h>
/*2. Escrever um programa que l� um valor que representa a medida, 
em metros, da aresta de um cubo, e chama uma fun��o para calcular o volume do cubo e 
outra para calcular o per�metro de cada um dos seus lados.*/
	float vol(float a){
		return	(a*a*a);
	}
	float per(float a){
		return	(a*4);
	}
	
	
main() {
	float a, vol1, per1;
	printf("informe o valor de uma arestado cubo: ");
	scanf("%f", &a);
	vol1 = vol(a);
	per1 = per(a);
	printf("de acordo com a astesta de tamanho %2f\n",  a);
	printf("o valor do cubo e: %2f\n", vol1);
	printf("o perimetro de cada lado do cubo e: %2f", per1);
	}
