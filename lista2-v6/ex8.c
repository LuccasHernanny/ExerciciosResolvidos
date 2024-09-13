/*8. Escreva um programa que dado um intervalo numérico A e B, onde A e B são
inteiros positivos, informe quais são e quantos são os múltiplos de um número
inteiro informado pelo usuário.*/

#include <stdio.h>

int main(){
    int i, a, b, n, qnt = 0;

    printf("Informe o comeco do intervalo: ");
    scanf("%d", &a);
    printf("Informe o final do intervalo: ");
    scanf("%d", &b);
    printf("Informe um numero dentro do intervalo: ");
    scanf("%d", &n);
    for (i = a; i <= b; i++)
    {
        if(i % n == 0){
            printf("%d ", i);
            qnt++;
        }
    }
    printf("\nSão %d números multiplos de %d!\n", qnt, n);
    return 0;
}