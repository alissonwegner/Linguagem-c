/*1. Fa�a um programa que leia uma string e passe a string para uma FUN��O que calcule o n�mero de vogais, 
de consoantes e de outros caracteres (espa�o, sinais de pontua��o, etc.) da string. 
Dentro da fun��o main deve ser gerada uma mensagem informando os totais contados. 
Para simplificar, ignore as letras com acentos. Lembre-se que uma fun��o retorna no m�ximo um valor!*/
ta errada
#include <stdio.h>
int func(char str[],int *vog,int *con,int *out){
  int i;   

for(i=0;str[i] != '\0';i++){
              if ( str[i]<65 || str[i] > 90 ){
              *out++;
                                      }
               if(str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85){
                         *vog++;
                         }else{
                               *con++;}
}
return(0);
}

int main() {
    char str[30];
    int vog, con, out;
    printf("Digite uma string: ");
    scanf("%s", str);
    func(str, &vog, &con, &out);
   printf("numero de vogais e: %d ", vog);
   printf("numero de consoante e: %d ", con);
      printf("numero de outras e: %d ", out);


}
