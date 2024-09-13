/*4. Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
são múltiplos de três e que se encontram no conjunto dos números de 1 até 500*/

#include <stdio.h>

int main(){
    int i, soma = 0;
    for (i = 0; i <= 500; i++)
    {
        if(i % 2 != 0 && i % 3 == 0){
            soma = soma + i;
        }
    }
    printf("O resultado da soma: %d\n", soma);
    return 0;
}