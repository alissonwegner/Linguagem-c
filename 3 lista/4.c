/*4. Escreva um programa que leia tr�s valores inteiros, A, B e N ( assuma que | A � B | > 3N ). 
O programa deve gerar dois valores aleat�rios x e y, ambos entre A e B e com diferen�a entre eles maior que N ( ou seja,  | x � y | > N ). 
Uma forma de garantir a diferen�a m�nima entre os valores da gera��o aleat�ria � gerar primeiro x e 
depois gerar tantos valores para y quantos necess�rios at� que tal restri��o seja obedecida. 
Mas � desej�vel que voc�s codifiquem uma solu��o que garanta que o primeiro valor de y j� ser� satisfat�rio, 
ou seja, uma solu��o em que a fun��o de gera��o de n�meros aleat�rios seja chamada apenas duas vezes.*/
#include <stdio.h>
#include <time.h>
  int main() {
int a, b, n, x, y, i;
  printf("informe o vator de A:");
  	scanf("%d", &a);
  	printf("\n informe o vator de B:");
  	scanf("%d", &b);
  	printf("\n informe o vator de N:");
  	scanf("%d", &n);
  		 srand((unsigned) time(NULL) );
		 	x = (rand()%(a - (b+n))+(b+n) );
			y = (rand()%(x-n));
	printf("\n informe o vator de x: %d", x);
  	printf("\n informe o vator de n: %d", y);
}
  
