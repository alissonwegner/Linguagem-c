#include <stdio.h>
void inc(int vetor[3], int x) {
	int i;
	for (i=0; i<5; i++) vetor[i] = vetor[i] + x;
    }

main (void) {
	int vetorum[5], i;
	printf ("Digite 5 numeros\n");
	for (i = 0; i < 5; i++)
	  scanf ("%d", &vetorum[i]);
    printf("Vetor digitado: ");
	for (i = 0; i < 5; i++)
	  printf ("%d ", vetorum[i]);
	inc(vetorum, 2);
	printf("\nVetor apos funcao: ");
	for (i = 0; i < 5; i++)
	  printf ("%d ", vetorum[i]);
	}
