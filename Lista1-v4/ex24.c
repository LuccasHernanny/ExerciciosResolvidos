/*24. Fazer um programa que, mediante a leitura de uma distância (em Km), do período de
tempo (em hora) utilizado para percorrê-lo e da quantidade de combustível (em litros)
utilizada, calcule a velocidade média(em Km/h) e o consumo médio do automóvel (em
Km/l)*/

#include <stdio.h>

int main(){
    int distancia, tempo, velocidade ,combustivel, consumo;

    printf("Informe a distancia percorrida em Km: ");
    scanf("%d", &distancia);
    printf("Informe o tempo em horas: ");
    scanf("%d", &tempo);
    printf("Informe a quantidade de combustivel em litros: ");
    scanf("%d", &combustivel);

    velocidade = distancia/tempo;
    consumo = distancia/combustivel;

    printf("Velocidade media: %d\n", velocidade);
    printf("Consumo medio: %d\n", consumo);
}