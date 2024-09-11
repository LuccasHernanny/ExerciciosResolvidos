/*21. Faça um programa que leia o dia, mês e ano inserido por um usuário e imprima os dados
no formato convencional brasileiro de data “dia/mês/ano”.*/

#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d\n", dia, mes, ano);
    return 0;
}