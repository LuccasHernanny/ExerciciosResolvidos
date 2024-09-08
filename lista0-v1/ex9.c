/*9) Escreva um programa que a partir de um número informado pelo usuário informa se
esse número é positivo ou negativo*/
#include<stdio.h>

int main(){
    int n1;
    
    printf("Informe um número: ");
    scanf("%d", &n1);
    if(n1 < 0){
        printf("O número informado é negativo\n");
        return 0;
    }
    printf("O número informado é positivo\n");
    return 0;
    
}