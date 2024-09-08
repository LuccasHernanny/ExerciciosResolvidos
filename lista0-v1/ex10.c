/*10) O retângulo é definido como uma figura geométrica plana que possui os lados
opostos paralelos entre si e seus ângulos internos são todos congruentes. Um
quadrado é um caso especial de retângulo. É um retângulo onde os seus lados têm
sempre a mesma medida. Escreva um programa que a partir de dois números
decimais informados pelo usuário identifica se a figura geométrica em questão se
trata de um retângulo ou um quadrado.*/
#include<stdio.h>

int main(){
    int base, altura;
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    if(base == altura){
        printf("Isto é um quadrado \n");
        return 0;
    }
    printf("Isto é um retangulo\n");
    return 0;
}