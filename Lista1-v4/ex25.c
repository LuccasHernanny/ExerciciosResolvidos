/*25. Escreva um programa que dado um caracter informa o seu código ASCII em inteiro*/

#include <stdio.h>

int main(){
    char c;
    printf("Informe um caracter: ");
    scanf("%c", &c);
    printf("O caracter %c possui este codigo: %d\n", c, c);
    return 0;
}