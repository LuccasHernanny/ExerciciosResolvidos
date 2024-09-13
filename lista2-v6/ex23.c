/*23. A conversão de graus Fahrenheit para centígrado é obtida pela fórmula C= 5/9(F-
32). Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados
em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1*/

#include <stdio.h>

int main (){
    float c, i;
    for (i = 50.0; i <= 150.0; i++)
    {
        c = (5.0/9.0)*(i - 32);
        printf("%.2fCº    %.0fFº\n", c, i);
    }
    
    return 0;
}