/*24.Escreva um algoritmo que lê uma base e um expoente e calcula a potência usando
multiplicações sucessivas. Por exemplo, a base 2 com expoente 5 é igual a 32. Não
use funções da biblioteca math.h.*/

#include <stdio.h>

int main(){
    int base, expoente, i, aux;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
    aux = base;
    if(expoente == 0){
        printf("Resultado: 1\n");
        return 0;
    }
    if(expoente < 0){
        printf("Somente expoentes positivos!\n");
        return 0;
    }
    for (i = 1; i <= expoente; i++)
    {
        if(i == 1){

        }
        else{
            base = base*aux;
        }
        
    }
    printf("Resultado: %d\n", base);
    return 0;
}