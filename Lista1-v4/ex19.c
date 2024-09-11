/*  19. Faça um programa que recebe um valor em segundos de um usuário e imprima a frase:
“Agora são exatamente” seguida da hora no formato “horas:minutos:segundos*/

#include <stdio.h>

int main(){
    int hora = 0, minuto = 0, segundo = 0;

    printf("Informe tempo em  segundo: ");
    scanf("%d", &segundo);
    hora = segundo/3600;
    segundo = segundo - hora*3600;
    minuto = segundo/60;
    segundo = segundo - minuto*60;


    printf("Agora sao exatamente %d:%d:%d\n", hora, minuto, segundo);
    return 0;
}