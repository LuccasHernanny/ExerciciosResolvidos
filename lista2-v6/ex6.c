/*6. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A
entrada de dados deve terminar quando for lido um número negativo.*/

#include <stdio.h>

int main(){
    int numeros[5], i, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &numeros[i]);
        if(numeros[i]>= 0 && numeros[i] <= 25){
            intervalo1++;
        }
        if(numeros[i]>= 26 && numeros[i] <= 50){
            intervalo2++;
        }
        if(numeros[i]>= 51 && numeros[i] <= 75){
            intervalo3++;
        }
        if(numeros[i]>= 76 && numeros[i] <= 100){
            intervalo4++;
        }
        if(numeros[i] < 0){
            i = 5;
        }
    }
    
    printf("No intervalo [0-25]: %d\n", intervalo1);
    printf("No intervalo [26-50]: %d\n", intervalo2);
    printf("No intervalo [51-75]: %d\n", intervalo3);
    printf("No intervalo [76-100]: %d\n", intervalo4);


    
    return 0;
}