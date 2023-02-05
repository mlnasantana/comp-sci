/*
Milena Santana de Almeida, 21.1.4175
*/
#include <stdio.h>

int main(){

    char letra;

    printf("Usuario, favor informar uma letra:\n");
    scanf("%c", &letra);

    switch(letra){
        case 'a':
            printf("A letra digitada = vogal.\n");
            break;
        case 'A':
            printf("A letra digitada = vogal.\n");
            break;
        case 'e':
            printf("A letra digitada = vogal.\n");
            break;
        case 'E':
            printf("A letra digitada = vogal.\n");
            break;
        case 'i':
            printf("A letra digitada = vogal.\n");
            break;
        case 'I':
            printf("A letra digitada = vogal.\n");
            break;
        case 'o':
            printf("A letra digitada = vogal.\n");
            break;
        case 'O':
            printf("A letra digitada = vogal.\n");
            break;
        case 'u':
            printf("A letra digitada = vogal.\n");
            break;
        case 'U':
            printf("A letra digitada = vogal.\n");
            break;
        default :
            printf("A letra digitada = consoante.\n");
    }
    return 0;
}