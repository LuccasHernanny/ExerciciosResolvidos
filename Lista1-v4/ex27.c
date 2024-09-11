#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d, calculo1, calculo2;
    
    printf("Informe o 1o Valor: ");
    scanf("%d", &a);
    printf("Informe o 2o Valor: ");
    scanf("%d", &b);
    printf("Informe o 3o Valor: ");
    scanf("%d", &c);
    printf("Informe o 4o Valor: ");
    scanf("%d", &d);
    
    calculo1 = (b/(a+c) + 4*a)/((d-2*a)/(3+c));
    calculo2 = (-b -pow(b, 3) -4*a*c + 2*pow(a, 2))/((2*a)/pow((b+1), 2));
    
    printf("Resultado calculo1: %d\n", calculo1);
    printf("Resultado calculo2: %d\n", calculo2);
    
    
    return 0;
}