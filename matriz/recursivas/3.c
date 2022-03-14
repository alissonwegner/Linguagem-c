/*3. Escrever um programa com uma função RECURSIVA que retorna a soma dos números
inteiros que existem entre n1 e n2 (inclusive ambos, mas sem repetir se n1=n2). Ler n1 e
n2 antes da primeira chamada.
 Ex: n=somaintervalo(3, 6);  n recebe 18 (3 + 4 + 5 + 6) */
/* n=somaintervalo(5, 5);  n recebe 5 */
/* n=somaintervalo(-2,3);  n recebe 3 (-2 + -1 + 0 + 1 + 2 + 3) */
/* n=somaintervalo(4, 0);  n recebe 10 (4 + 3 + 2 + 1 + 0) */ 
//
#include<stdio.h>

int func(int n1, int n2){
    if(n1>n2) return 0;
    if( n1 == n2) return n1;
    return n1+func(n1+1, n2);
}
int main(){
    int n1, n2, d;
n1=3;
n2=6;
    d=func(n1, n2);

    printf("\n o valor entre %d e %d e :%d", n1, n2, d);



printf("\n");
}