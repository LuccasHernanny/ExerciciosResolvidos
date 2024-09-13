/*21. Elabore um algoritmo que obtenha o máximo divisor comum (MDC) entre dois
números fornecidos.*/

#include <stdio.h>

int main(){
    int i, n1, n2, teste = 0;
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe outro numero: ");
    scanf("%d", &n2);
    for (i = n1; i >=2; i--)
    {
        if(n1 % i == 0 && n2 % i == 0){
            printf("O MMC entre %d e %d: %d", n1, n2, i);
            i = 1;
            teste = 1;
        }
    }
    if(teste == 0)
    {
        printf("Nao existe nenhum multiplo comum entre eles!\n");
    }
    printf("\n");
    return 0;
}