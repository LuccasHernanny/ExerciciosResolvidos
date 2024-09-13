/*2. Escreva um programa que solicite ao usuário um número e exiba a soma dos
números de 1 até esse número.*/

#include <stdio.h>

int main(){
    int n, i, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        soma = soma + i;
    }
    printf("O resultado da soma: %d\n", soma);
    return 0;
}