/*8) Escreva um programa para calcular a área de um triâgulo a partir de valores de base
e altura fornecidos pelo usuário*/
#include<stdio.h>

int main(){
    int base, altura, area;
    printf("Informe a base do triangulo: ");
    scanf("%d", &base);
    printf("Informe a altura do triangulo: ");
    scanf("%d", &altura);

    area = base*altura/2;

    printf("A area do triangulo: %d\n", area);


    return 0;
}