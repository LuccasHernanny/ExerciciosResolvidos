/*13. Construa um algoritmo que calcule se um número fornecido pelo usuário é primo
ou não.*/

#include <stdio.h>

int main(){
    int i, n, contaPrimo = 0; 

    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if(n % i == 0){
            contaPrimo++;
        }
    }
    if(contaPrimo > 2){
        printf("O número %d não é primo!\n", n);
        return 0;
    }
    printf("O número %d é primo!\n", n);
    
    return 0;
}