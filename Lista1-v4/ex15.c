/*15. Escreva um algoritmo que informa 1 se o número é par ou 0 se o número é impar (não é
necessário usar o comando se). Implemente em linguagem C (observação: pesquise sobre
o operador módulo).*/

#include <stdio.h>

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("0 = par, 1 = impar, o numero e: %d\n", n%2);
    return 0; 
}