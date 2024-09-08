/*5) Escreva um programa que receba dois valores numéricos fornecidos via código e
calcule as quatro operações básicas: soma, subtração, divisão e módulo. \n */
#include <stdio.h>
int main(){
    int n1 = 5, n2 = 3, soma, divisao, modulo, subtracao;
    soma = n1 + n2;
    divisao = n1 / n2;
    modulo = n1 % n2;
    subtracao = n1 - n2;

    printf("A soma %d + %d = %d\n", n1, n2, soma);
    printf("A divisão  %d / %d = %d\n", n1, n2, divisao);
    printf("O modulo  da divisao %d / %d = %d\n", n1, n2, modulo);
    printf("A subtracao %d - %d = %d\n", n1, n2, subtracao);
    return 0;
}