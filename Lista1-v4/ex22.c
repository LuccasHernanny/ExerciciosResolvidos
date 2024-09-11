/*22. Faça um programa que dada uma constante PI definida com o valor
3,14159265358979323846, imprima essa constante com apenas quatro casas decimais.*/

#include <stdio.h>

int main(){
    double pi = 3.14159265358979323846;
    printf("%.4f\n", pi);
    return 0;
}