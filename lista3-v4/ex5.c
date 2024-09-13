/*5. Elaborar uma função para converter uma temperatura em graus Kelvin para graus Celsius.*/

#include <stdio.h>

float KelvinParaCelsius(int kelvin){
    return kelvin - 273.15;
}
int main(){
    float grauKelvin;

    printf("Informe o graus em Kelvin: ");
    scanf("%f", &grauKelvin);

    printf("%.2fKº = %.2fCº\n", grauKelvin, KelvinParaCelsius(grauKelvin));
    return 0;
}