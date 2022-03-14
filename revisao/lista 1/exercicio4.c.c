#include<stdio.h>
somaintervalo(n1, n2){
	int soma;
	if(n1<n2){
		for(  ;n1<=n2;n1++){
			soma =soma + n1;
		}		
	}
	if(n1 == n2){
		soma = n1 + n2;
	}
	if(n1>n2){
			for( ;n1>=n2;n2++){
				soma = soma + n2;
		}	
	}
	return(soma);
}

main(){
	int n1, n2, n;
	printf("informe valor n1    ");
	  scanf("%d", &n1);
	printf("informe valor n2    ");
	  scanf("%d", &n2);
n = somaintervalo(n1, n2);
printf("o valor de n1: %d n2: %d e valor da soma dos intervalos : %d", n1, n2, n);
}
