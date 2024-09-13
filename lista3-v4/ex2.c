/*2. Elaborar um programa que leia 2 valores inteiros. Crie e um procedimento para escrever a
diferença entre eles.*/

#include <stdio.h>

int subtracao(int a, int b){
    return a - b;
}

int main(){
    int n1, n2;

    printf("Informe o 1o numero: ");
    scanf("%d", &n1);
    printf("Informe o 2o numero: ");
    scanf("%d", &n2);

    printf("%d - %d = %d\n", n1, n2, subtracao(n1, n2));
    return 0;
}