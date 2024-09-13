/*1. Elaborar um programa que leia 2 valores inteiros. Codifique uma função para realizar a
soma dos mesmos e crie um procedimento (função sem retorno) para imprimir o resultado.*/

#include <stdio.h>

int soma(int a, int b){
    return a + b;
}
int main(){
    int n1, n2;

    printf("Informe o 1o numero: ");
    scanf("%d", &n1);
    printf("Informe o 2o numero: ");
    scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, soma(n1, n2));
    return 0;
}