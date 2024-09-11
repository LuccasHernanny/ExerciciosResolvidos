/*26. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem
decrescente. Utilize para tal uma seleção encadeada*/

#include <stdio.h>

int main(){
    int n1, n2, n3, aux = 0; //n1 maior valor, n3 menor valor
    printf("Informe o 1o valor: ");
    scanf("%d", &n1);
    printf("Informe o 2o valor: ");
    scanf("%d", &n2);
    printf("Informe o 3o valor: ");
    scanf("%d", &n3);
    
    if(n1<n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
        if(n1 < n3){
            aux = n1;
            n1 = n3;
            n3 = aux;
        }
        if(n2 < n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    else{
        if(n1 < n3){
            aux = n1;
            n1 = n3;
            n3 = aux;
        }
        if(n2< n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    printf("Em ordem decrescente temos: %d, %d, %d\n", n1, n2, n3);

    return 0;
}