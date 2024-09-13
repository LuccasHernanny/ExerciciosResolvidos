/*3. Elaborar um programa que leia um número real. Além disso, desenvolva uma função sem
retorno para calcular e imprimir o resultado do quadrado desse número.*/

#include <stdio.h>

void quadrado(float numero){
    printf("o quadrado do numero %.2f é %.2f\n", numero,numero*numero);
}

int main(){
    float n;

    printf("Informe um numero: ");
    scanf("%f", &n);

    quadrado(n);

    return 0;
}