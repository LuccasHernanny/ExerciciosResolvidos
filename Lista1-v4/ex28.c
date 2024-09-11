/*28. Desenvolva uma algoritmo que calcule as raízes de uma equação do 2o grau, na forma Ax2
+ Bx + C, levando em consideração a existência de raízes reais.*/

#include <stdio.h>
#include <math.h>

int main(){
    float  a, b, c, x1, x2, delta;
    
    printf("Informe o termo A: ");
    scanf("%f", &a);
    printf("Informe o termo B: ");
    scanf("%f", &b);
    printf("Informe o termo C: ");
    scanf("%f", &c);
    
    delta = pow(b, 2) - 4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    
    printf("A primeira raiz x1: %.2f\n", x1);
    printf("A segunda raiz x2: %.2f\n", x2);
    return 0;
}