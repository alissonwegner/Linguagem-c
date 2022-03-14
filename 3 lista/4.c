/*4. Escreva um programa que leia três valores inteiros, A, B e N ( assuma que | A – B | > 3N ). 
O programa deve gerar dois valores aleatórios x e y, ambos entre A e B e com diferença entre eles maior que N ( ou seja,  | x – y | > N ). 
Uma forma de garantir a diferença mínima entre os valores da geração aleatória é gerar primeiro x e 
depois gerar tantos valores para y quantos necessários até que tal restrição seja obedecida. 
Mas é desejável que vocês codifiquem uma solução que garanta que o primeiro valor de y já será satisfatório, 
ou seja, uma solução em que a função de geração de números aleatórios seja chamada apenas duas vezes.*/
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
  
