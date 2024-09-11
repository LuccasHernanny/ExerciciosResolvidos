/*29. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo
que calcule o seu peso ideal, utilizando as seguintes fórmulas:
1. para homens: (72.7 * h) – 58;
2. para mulheres: (62.1 * h) – 44.7.*/

#include <stdio.h>

int main(){
    char sexo;
    float altura, peso;

    printf("m - masculino\nf - feminino\nInforme o sexo: ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com a altura de %.2f é: %.2f\n", altura, peso);
        return 0;
    }
    peso = (62.1 * altura) - 44.7;
    printf("O peso ideal para uma mulher com a altura de %.2f é: %.2f\n", altura, peso);
    return 0;
}