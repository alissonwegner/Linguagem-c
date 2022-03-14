/*- deve haver 7 ou 8 vogais na matriz;
- deve haver pelo menos 3 vogais diferentes dentre as geradas;
- deve haver pelo menos uma vogal em cada linha;
- nenhuma consoante pode aparecer mais de duas vezes;
- todas consoantes devem ter pelo menos uma vogal na adjacência (vizinhança), podendo ser
na vertical, horizontal ou diagonal.
A -65
E -69
I -73
O -79
U -85
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 3
 main(){

     srand(time(NULL));
     int c, l, i, j, mat[6][TAM], v;
     /*c = 65 + (rand() % 25 );
     /*v = 65 + (rand() % 8 );*/

      for(i = 0;i < 6;i++){

        for(j = 0;j < TAM;j++){
            c = 65 + (rand() % 25 );
            mat[i][j] = c;
}
}


        for(i = 0;i < 6;i++){
            for(j = 0;j < TAM;j++){
                    printf("[%c]", mat[i][j]);
            }
            printf("\n");
 }
 }
