#include <stdio.h>
#include <stdlib.h>
 char *func(char str[], char str2[]){
 	int n=2, i, contador, x=6, a;
 	char *p;
 	p = (char *) malloc (sizeof(char)* x);
	for(a=0;a<3;a++,i++)
	{
		*(p+i)= str[a];
	}
	*(p+i)='\0';
	

 return (p);

 }
int main(){

char str[10]="A aula";
char str2[10]={"outra"};
char *p;
p = func(str, str2);


	printf("%s", p);


free(p);
}
