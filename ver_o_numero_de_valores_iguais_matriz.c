#include <stdio.h>
#include <stdlib.h>
#include<string.h>

    main(){

    int mat1[4][4]={{96,96,3,0},{-9,0,32,78},{96,32,0,0},{-10,-4,13,5}};
    int i, j, k, l;
    int aux = 0;

    for(i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 4; j++){
            printf("[%d]", mat1[i][j]);
            printf("\t");
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 4; k++){
                for(l = 0; l < 4; l++){
                        /* encontrar os repetidos e contar*/
                    if(mat1[i][j] == mat1[k][l] && (i != k || j != l)){
                    aux++;
                    break;
                    }
                }
            }
        }
    }
    printf("\nO numero de elementos repitidos na matriz e de:\n%d", aux );
    return 0;
}

