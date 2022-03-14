#include <stdio.h>
#include <stdlib.h>

main (){

    int n=5,conts2=0;
    char str[5]="aulas",str2[5]="outro",*p,i,x=0,*guarda,*y;
    p=(char *) malloc(10);
    guarda=p;
   // printf ("%d",sizeof(p));
    for (i=0;i<10;i++,p++){
        if(i>=n && conts2<5){
            *p=str2[conts2];
            conts2++;
        }
        else{
            *p=str[x];
            x++;
        }
    }

    for (p=guarda;*p!='\0';p++){
        printf ("%c",*p);
    }

    free(guarda);
}
