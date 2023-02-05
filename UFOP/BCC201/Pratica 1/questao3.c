/*
Milena Sanatana de Almeida, 21.1.4175
*/
#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Usuario, favor informar o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Usuario, favor informar o segundo numero:\n");
    scanf("%d", &n2);
    printf("Usuario, favor informar o terceiro numero:\n");
    scanf("%d", &n3);

    int maior = n1, medio = n1, menor = n1;

    //verificando quem e o maior numero
    if(n1 >= maior && n1 > n2 && n1 > n3){
        maior = n1;
    }
    if(n2 >= maior && n2 > n1 && n2 > n3){
        maior = n2;
    }   
    if(n3 >= maior && n3 > n1 && n3 > n2){
        maior = n3;
    }

    //verificando quem e o menor numero
    if(n1 <= menor && n1 < n2 && n1 < n3){
        menor = n1;
    }
    if(n2 <= menor && n2 < n1 && n2 < n3){
        menor = n2;
    }
    if(n3 <= menor && n3 < n1 && n3 < n2){
        menor = n3;
    }
        
    //verificando quem e o medio
    if(n1 != maior && n1 != menor){
        medio = n1;
    }
    if(n2 != maior && n2 != menor){
        medio = n2;
    }
    if(n3 != maior && n3 != menor){
        medio = n3;
    }

    printf("Menor: %d\n", menor);
    printf("Intermediario: %d\n", medio);
    printf("Maior: %d\n", maior);
    return 0;
}