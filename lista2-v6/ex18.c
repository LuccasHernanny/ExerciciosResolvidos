/*18.Os números perfeitos são iguais à soma de seus divisores: 6 pode ser dividido
por 1, 2 e 3 e, quando você soma esses números, o resultado é 6. A história dos
números perfeitos faz parte de um dos ramos mais antigos e fascinantes da
matemática: a teoria dos números. Escreva um algoritmo para descobrir se um
número informado pelo usuário é ou não perfeito*/

#include <stdio.h>

int main(){
    int i, n, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if(n % i == 0){
            soma = soma + i;
        }
    }
    if(soma == n){
        printf("O numero %d é perfeito!\n", n);
        return 0;
    }
    printf("O numero  não %d é perfeito!\n", n);
    return 0;
}