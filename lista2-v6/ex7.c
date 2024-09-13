/*7. Escreva um programa que dado um intervalo numérico A e B, onde A e B são
inteiros positivos, informe quais são e quantos são os múltiplos de 7.*/

#include <stdio.h>

int main(){
    int i, a, b, qnt = 0;

    printf("Informe o comeco do intervalo: ");
    scanf("%d", &a);
    printf("Informe o final do intervalo: ");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        if(i % 7 == 0){
            printf("%d ", i);
            qnt++;
        }
    }
    printf("\nSão %d números multiplos de 7!\n", qnt);
    return 0;
}