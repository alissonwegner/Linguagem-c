#include<stdio.h>
/*5. Escreva um programa que leia uma string e chame uma fun��o, passando a string como par�metro 
para calcular o seu tamanho (n�mero de letras). 
O valor calculado deve ser retornado para a fun��o main, e ent�o exibido na tela.
*/
 
	int funcao(char str[]){
		int i, c;
		while(str[i] !='\0'){
			i++;
	}
	return(i);
}


main(){
	int n1;
	char str[30];
	printf("informe a string\n");
	scanf("%s", str);
	n1 = funcao(str);
	printf("a string %s tem %d letras", str, n1);
}
