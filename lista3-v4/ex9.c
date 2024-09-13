/*9. Elaborar um programa para ler as variáveis a, b, c e d a partir do console. As variáveis são
do tipo real (ou seja, devem lidar adequadamente com números decimais). Determinar as
seguintes médias aritméticas, harmônicas, geométricas e quadráticas, conforme fórmulas
gerais apresentadas abaixo. Utilize um procedimento para calcular cada uma das médias.
Cada procedimento deve usar passagem de parâmetro por referência. Nas fórmulas o
valor de n se refere a quantidade de termos, portanto usar 4.*/

#include <stdio.h>

void MediaAritmetica(float a, float b, float c, float d, float *media){
    *media = (a + b + c + d)/4;
 
}

void MediaHarmonica(float a, float b, float c, float d, float *media){
    *media = 4/(1/a + 1/b + 1/c + 1/d);
}
void mediaGeometrica(float a, float b, float c, float d, float *media){
    *media = pow(a*b*c*d,1.0/4.0);
}
void mediaQuadratica(float a, float b, float c, float d, float *media){
    *media = sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2))/4);
}
int main(){
    float a, b, c, d, aritmetica, harmonica, geometrica, quadratica;

    printf("Informe o 1o valor: ");
    scanf("%f",&a);
    printf("Informe o 2o valor: ");
    scanf("%f",&b);
    printf("Informe o 3o valor: ");
    scanf("%f",&c);
    printf("Informe o 4o valor: ");
    scanf("%f",&d);
    MediaAritmetica(a, b, c, d, &aritmetica);
    MediaHarmonica(a, b, c, d, &harmonica);
    mediaGeometrica(a, b, c, d, &geometrica);
    mediaQuadratica(a, b, c, d, &quadratica);

    printf("Media aritmetica: %.2f\n", aritmetica);
    printf("Media harmonica: %.2f\n", harmonica);
    printf("Media geometrica: %.2f\n", geometrica);
    printf("Media quadratica: %.2f\n", quadratica);
    return 0;
}