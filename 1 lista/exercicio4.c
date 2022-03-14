#include<stdio.h>
/*4. Escrever um programa que chama uma função que retorna a soma dos número inteiros que existem entre os números n1 e n2 (inclusive ambos) passados como parâmetros. A função deve funcionar inclusive se o valor de n2 for menor que n1. Ler n1 e n2 na função main e retornar para a main o valor resultante. Ex:
n=somaintervalo(3, 6); /* n recebe 18 (3 + 4 + 5 + 6) 
n=somaintervalo(5,5); /* n recebe 10 (5 + 5) 
n=somaintervalo(-2,3); /* n recebe 3 (-2 + -1 + 0 + 1 + 2 + 3) 
n=somaintervalo(4, 0); /* n recebe 10 (4 + 3 + 2 + 1 + 0) 
*/
somaintervalo(n1, n2){
	int soma;
	if(n1<n2){
		for(  ;n1<=n2;n1++){
			soma =soma + n1;
		}
			return (soma);		
	}
	if(n1 == n2){
		soma = n1 + n2;
			return (soma);
	}
	if(n1>=n2){
			for( ;n1>=n2;n2++){
				soma = soma + n2;
		}
			return(soma);	
	}

}

main(){
	int n1, n2, n;
	printf("informe valor n1  ");
	  scanf("%d", &n1);
	printf("informe valor n2  ");
	  scanf("%d", &n2);
n = somaintervalo(n1, n2);
printf("o valor de n1: %d n2: %d e valor da soma dos intervalos : %d", n1, n2, n);
}
