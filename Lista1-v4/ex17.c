/*17. Escreva um programa que calcula a área e o comprimento de um círculo. Considere que o
usuário informa o valor do raio com casas decimais. Sugestão: use o valor de PI como
uma constante. A saída deverá ser apresentada da seguinte forma:
Comprimento do círculo é: xx
Área do círculo é: xx*/

#include <stdio.h>
#define PI 3.14
int main(){
    float raio, comprimento, area;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    comprimento = 2*PI*raio;
    area = PI*raio*raio;

    printf("Comprimento do circulo: %.2f\n", comprimento);
    printf("Area do circulo: %.2f\n", area);
    return 0;
}