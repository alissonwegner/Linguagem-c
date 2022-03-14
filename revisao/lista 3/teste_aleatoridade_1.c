#include<stdio.h>
#include<time.h>
main(){
int r;
/* teste de aleatoriedade */
srand((unsigned) time(NULL));
r = rand()%11+20;
printf("numero aleatorio %d", r);
}
