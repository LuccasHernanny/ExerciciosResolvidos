/*20. Faça um programa que leia a idade do usuário e imprima a idade da seguinte forma: “A
sua idade é: ”. Não se esqueça de quebrar uma linha no ato de impressão*/

#include <stdio.h>

int main(){
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("A sua idade e: %d\n", idade);
    return 0;
}