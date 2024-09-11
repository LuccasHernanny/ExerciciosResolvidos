/*35. Construa um algoritmo que calcule e escreva o custo e a quantidade de latas de tinta
necessárias para pintar tanques cilíndricos de combustível. É fornecida as seguintes
informações: o preço da lata de 5 litros, o raio e a altura dos tanques cilíndricos. Cada litro
de tinta pinta 3 metros quadrados.*/

#include <stdio.h>
#define PI 3.14
int main(){
    int latas;
    float area, preco, raio, altura, custo;
    
    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe o raio da base do cilindro: ");
    scanf("%f", &raio);
    printf("Informe o preço da lata de tinta: ");
    scanf("%f", &preco);

    area = 2*PI*raio*(raio+altura);
    latas = area/3;

    custo = latas*preco;

    printf("Para pintar um cilindro com uma área de %.2f será necessário %d latas e custará R$: %.2f\n", area, latas, custo);
    return 0;
}