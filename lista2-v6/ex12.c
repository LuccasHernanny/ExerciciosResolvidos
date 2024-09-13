/*12. Sendo H = 1 + ½ + 1/3 + ¼ + … + 1/N, escreva um algoritmo para gerar o número
H. O número N é fornecido pelo usuário.*/

#include <stdio.h>

int main(){
    int  n;
    float h = 0, i;

    printf("Informe N: ");
    scanf("%d", &n);

    for (i = 1.0; i <= n; i++)
    {
        h = h + 1/i;
    }
    printf("H: %.2f\n", h);
    return 0;
}