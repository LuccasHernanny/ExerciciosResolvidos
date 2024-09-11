/*14. Elabore um algoritmo para calcular o novo salário de um funcionário. Sabe-se que os
funcionário que possuem salário atual até R$ 500,00 terão aumento de 20%, e os demais
terão aumento de 10%. */

#include <stdio.h>

int main(){
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);
    if(salario <= 500){
        salario = salario + salario*0.2;
        printf("Seu novo salario: %.2f\n", salario);
        return 0;
    }
    salario = salario + salario*0.1;
    printf("Seu novo salario: %.2f\n", salario);
    return 0;
}