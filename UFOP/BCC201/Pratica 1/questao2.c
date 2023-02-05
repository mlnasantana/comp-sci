/*
Milena Santana de Almeida, 21.1.4175
*/
#include <stdio.h>

int main(){

    int ano;

    //solicitando que o usuario digite um valor para a variavel
    printf("Usuario, favor informar um ano:\n");
    scanf("%i", &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 100 == 0 && ano % 400 == 0){
        printf("Ano bissexto!");
    }
    else{
        printf("Ano nao bissexto!");
    } 
    return 0;
}