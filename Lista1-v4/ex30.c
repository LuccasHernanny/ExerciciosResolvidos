/*30. Faça um algoritmo que leia o ano de nascimento de uma pessoa. Calcule e mostre sua
idade e também verifique e mostre se ela já tem idade para votar (16 anos ou mais) e para
conseguir carteira de habilitação (18 anos ou mais)*/

#include <stdio.h>

int main(){
    int idade, nascimento;

    printf("Informe sua data de nascimento: ");
    scanf("%d", &nascimento);
    idade = 2024 - nascimento;

    if(idade >= 18 ){
        printf("Com a idade de %d você pode votar e tirar a carteira de habilitação!\n", idade);
        return 0;
    }
    else{
        if(idade < 18 && idade >= 16){
            printf("Com a idade de %d você pode somente votar!\n", idade);
            return 0;
        }
        printf("Com a idade de %d você não pode votar e não pode tirar carteira de habilitação!\n", idade);
        return 0;
    }
}