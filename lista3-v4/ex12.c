/*2. Elabore uma função que dada um caracter da tabela ASCII recebido com parâmetro da
função retorna o seu valor inteiro;*/

#include <stdio.h>

int converteChar (char c){

    return c;
}

int main(){
    char caracter;

    printf("Informe um caracter: ");
    scanf(" %c", &caracter);

    printf("Codigo ASCII: %d\n", converteChar(caracter));
    return 0;
}