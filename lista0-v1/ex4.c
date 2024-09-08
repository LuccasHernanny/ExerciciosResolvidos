// 4) Escreva um programa para calcular a área e o perímetro de um retângulo a partir de valores de altura e largura fornecidos via código.
#include <stdio.h>
int main(){
    int altura = 5, largura = 10, area, perimetro;
    area = altura*largura;
    perimetro = 2*(altura+largura);
    printf("Perimetro do retangulo: %d\n", perimetro);
    printf("Area do retangulo: %d\n", area);

    return 0;
}
