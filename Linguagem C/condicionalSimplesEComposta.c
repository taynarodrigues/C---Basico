#include <stdlib.h>
#include <stdio.h>

void main(){

    //definindo variáveis
    int a = 4;

    //Condicional Simples
    if(a == 5){
        printf("\nA variavel a é igual a 5\n");
    }

    //número par ou impar
    if(a % 2 == 1){
        printf("\nA variavel a recebe o número %d e também é impar\n", a);
    }else{
        printf("\nA variavel a recebe o número %d e também é par\n", a);
    }
}