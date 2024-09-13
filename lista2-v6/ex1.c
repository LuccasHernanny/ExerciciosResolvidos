/*1. Escreva um programa que solicite ao usuário um número e exiba os números
pares de 1 até esse número.*/

#include <stdio.h>

int main(){
    int n, i;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}