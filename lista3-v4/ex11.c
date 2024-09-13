/* 11. Crie uma função para retornar o maior número entre 3 recebidos.*/

#include <stdio.h>

int maior(int a, int b, int c){
    int maior = a;
    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    return maior;
}

int main(){
    int n1, n2, n3;

    printf("Informe o 1o numero: ");
    scanf("%d", &n1);
    printf("Informe o 2o numero: ");
    scanf("%d", &n2);
    printf("Informe o 3o numero: ");
    scanf("%d", &n3);

    printf("Maior: %d\n", maior(n1, n2, n3));
    return 0;
}