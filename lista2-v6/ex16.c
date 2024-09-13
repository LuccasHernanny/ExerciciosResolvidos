/*6. Elabore um algoritmo que calcule N! (fatorial de N) usando um laço for, sendo que
o valor inteiro de N é fornecido pelo usuário. Sabendo que:
a) N! = 1 * 2 * 3 *...* (N-1) * N;
b) 0! = 1, por definição.*/

#include <stdio.h>

int main(){
    int n, i, fatorial;

    printf("Informe o valor para calcular o seu Fatorial: ");
    scanf("%d", &n);
    if(n == 0){
        printf("O fatorial de 0! é 1.");
        return 0;
    }
    fatorial = n;

    for (i = n - 1; i > 0; i--)
    {
        fatorial = fatorial * i;
    }
    
    printf("O fatorial de %d! é %d.\n", n, fatorial);
    return 0;
}