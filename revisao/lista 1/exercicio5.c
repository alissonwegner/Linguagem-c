#include<stdio.h>
int funcao(char str[]){
	int i, c;
/*	for(i=0;str != '\0';i++){
		c++;
	}*/
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
