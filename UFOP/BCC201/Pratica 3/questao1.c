/*
Milena Santana de Almeida, 21.1.4175
*/

#include <stdio.h>

void converterCelsius(float celcius, float *fahrenheit, float *kelvin);

int main(){
    float celcius, fahrenheit, kelvin;
    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%f", &celcius);

    converterCelsius(celcius, &fahrenheit, &kelvin);

    printf("\n%.2f Graus Celsius equivale a %.2f graus Fahrenheit.", celcius, fahrenheit);
    printf("\n%.2f Graus Celsius equivale a %.2f graus Kelvin.", celcius, kelvin);
    return 0;
}

void converterCelsius(float c, float *f, float *k){
    *f = c * 9/5 + 32;
    *k = c + 273.15;
}