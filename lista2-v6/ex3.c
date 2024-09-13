/*3. Desenvolver um algoritmo que efetue a soma de todos os números ímpares no
intervalo entre 0 e 1000.*/

#include <stdio.h>

int main(){
    int i, soma = 0;
    for (i = 0; i <= 1000; i++)
    {
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("O resultado da soma: %d\n", soma);
    return 0;
}