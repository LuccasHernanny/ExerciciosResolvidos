/*9. Escreva um algoritmo para somar 3 números informados pelo usuário através do console
(ou seja, usando a função scanf()) e apresente o resultado no console usando a função
printf. */
#include <stdio.h>

int main(){
    int x, y, z, k;
    printf("Informe o 1o numero: ");
    scanf("%d", &x);
    printf("Informe o 2o numero: ");
    scanf("%d", &y);
    printf("Informe o 3o numero: ");
    scanf("%d", &z);

    k = x + y + z;

    printf("O resultado da soma %d + %d + %d = %d\n", x, y, z, k);
    

    return 0;
}