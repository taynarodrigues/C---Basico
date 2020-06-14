#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //permite acentos
    setlocale(LC_ALL, "");
    printf("Olá ");

    //valores inteiros
    int a = 50;
    int b = 6;
    printf("%d ", a + b);
    printf("O valor de a é = %d", a);




    //valores quebrados
    float c = 5.5;
    printf("\nO valor de c é = %2.1f \n", c);




    //lendo letra
    char letra = 't';
    printf("O valor da letra é = %c \n", letra);
    fflush(stdin);  //fflush, siginifica limpar a entrada de buffer principal



    printf("\n");

}