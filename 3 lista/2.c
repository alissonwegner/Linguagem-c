/*2. Escreva um programa que gere um valor inteiro aleat�rio, identificado por m, entre 100 e 1000. 
A seguir, deve ser gerado um segundo valor, tamb�m de forma aleat�ria e identificado por n, entre -m/2 e +m/2. 
O programa deve ser feito de modo que a fun��o para gera��o de n�meros aleat�rios seja chamada apenas duas vezes, 
uma para gerar m e outra para gerar n. Ao final, os valores de m e n devem ser exibidos na tela.*/
#include <stdio.h>
#include <time.h>
int main(){	
	    int m, n, m2;
    srand((unsigned) time(NULL) );
      m =(rand()%(1000-100)+100);
      printf("numero %d\n", m);
      m = m/2;
      m2 = -m;     
      n =(rand()%(m-m2)+m2 );
	printf("numero %d\n", n);
}


 
