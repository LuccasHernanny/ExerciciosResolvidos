/*18. Faça um programa que receba como dados uma determinada hora e minuto de um usuário
e imprima a frase “Agora são exatamente” seguida dos dados no formato convencional de
horário “horas:minutos”.*/

#include <stdio.h>

int main(){
    int hora, minuto;

    printf("Informe a hora: ");
    scanf("%d", &hora);
    printf("Informe o minuto: ");
    scanf("%d", &minuto);

    printf("Agora sao exatamente %d:%d\n", hora, minuto);
    return 0;
}