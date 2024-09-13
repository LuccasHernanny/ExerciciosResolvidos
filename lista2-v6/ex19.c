/*19. Escreva um algoritmo que leia um conjunto de N números, onde N é uma
constante no código, e mostre qual foi o maior e o menor valor fornecido.*/

#include <stdio.h>
#define N 5
int main(){
    int i, valores[N], maior, menor;
    for(i=0; i < N; i++){
        printf("Informe um valor: ");
        scanf("%d", &valores[i]);
        if(i == 0){
            maior = valores[i];
            menor = valores[i];
        }
        else{
            if(maior < valores[i]){
                maior = valores[i];
            }
            else{
                if(menor > valores[i]){
                    menor = valores[i];
                }
            }
        }
    }
    printf("O maior valor digitado foi: %d\n", maior);
    printf("O menor valor digitado foi: %d\n", menor);
    return 0;
}