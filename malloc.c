#include<stdio.h>
##include "stdlib.h"
main (){
int *pi;
char *pc;
pi =(int*)malloc(sizeof(int))//faz pi apontar para o lugar dinamicamente alocado
pc = (char*)pi;
printf("%d \n", *pi);
printf("%c \n", *pi);
printf("%d \n", *pc);
printf("%d \n", *pc+1);//1 pego o proximo endereço
printf("%d \n", *(pc)+1);//66
printf("%d \n", *(pi)+1);//322 pego todo conteudo e somo +1
printf("%d \n", *(p1+1));
free (pi);
















}
