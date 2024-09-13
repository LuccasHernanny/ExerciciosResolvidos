/*13. Elabore uma função que recebe uma caracter minúsculo do alfabeto e retorna o
correspondente maiúsculo.*/

#include <stdio.h>

int maiusculo(char c){

    return c - 32;
}
int main(){
    char c;

    printf("Informe um caracter: ");
    scanf(" %c", &c);

    printf("%c\n", maiusculo(c));
    return 0;
}