/*17. A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,
55… etc. Escreva um algoritmo que gere a série de Fibonacci até um número N,
informado pelo usuário, onde N é quantidade de números na série.*/

#include <stdio.h>

int main(){
    int i, n, fibonacci = 1, aux = 1, aux2 = 0;

    printf("Informe quantos numeros voce deseja na serie de fibonacci: ");
    scanf("%d", &n);
    for(i = 0; i <n; i++){
        if(i == 0){
            printf("1 ");
        }else{
            printf("%d ", fibonacci);
            aux2 = fibonacci;
            fibonacci = fibonacci + aux;
            aux = aux2;
        }
        
    }
    printf("\n");

    return 0;
}