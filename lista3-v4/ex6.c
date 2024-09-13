/*6. Elaborar uma função para converter uma temperatura em graus Celsius para graus Kelvin.*/

#include <stdio.h>

float CelsiusParaKelvin(int celsius){
    return celsius + 273.15;
}
int main(){
    float grauCelsius;

    printf("Informe o graus em Celsius: ");
    scanf("%f", &grauCelsius);

    printf("%.2fCº = %.2fKº\n", grauCelsius,CelsiusParaKelvin(grauCelsius));
    return 0;
}