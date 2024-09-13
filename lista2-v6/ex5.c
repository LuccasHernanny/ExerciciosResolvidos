/*5. Desenvolver um algoritmo que leia um número de valores informados via console
pelo usuário e calcule e escreva a média aritmética dos valores lidos, a quantidade
de valores positivos, a quantidade de valores negativos e o percentual de valores
negativos e positivos.*/

#include <stdio.h>

int main(){
    int n[5], i, media, soma = 0;
    float positivos = 0, negativos = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o %do valor: ", i+1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        soma = soma + n[i];

        if(n[i] < 0){
            negativos++;
        }
        else{
            positivos++;
        }
    }
    media = soma/5;
    printf("Media: %d\n", media);
    printf("Positivos: %.0f\n", positivos);
    printf("Negativos: %.0f\n", negativos);
    printf("Porcentagem negativos: %.2f%\nPorcentagem positivos: %.2f%\n", (negativos/5)*100, (positivos/5)*100);

    


    return 0;
}