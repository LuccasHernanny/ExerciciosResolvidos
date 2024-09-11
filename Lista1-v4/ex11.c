/*11. O IMC é reconhecido como padrão internacional para avaliar o grau de sobrepeso e
obesidade. É calculado dividindo o peso (em kg) pela altura ao quadrado (em metros), da
seguinte forma: IMC = Peso ÷ (Altura × Altura). Escreva um algoritmo para apresentar o
IMC dado o peso e a altura do indivíduo informados via console*/
#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    printf("O seu imc e de: %.2f\n", imc);
    return 0;
}