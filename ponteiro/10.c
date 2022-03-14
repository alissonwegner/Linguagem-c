#include <stdio.h>
void funcao (int *, int);
void main (void) {
	int x = 10, y = 20, *p;
	p = &x;
	funcao(p, y);
	printf("%d", x);
	}
void funcao(int *pont, int y) {
    (*pont)++;
    pont = &y;
    }
