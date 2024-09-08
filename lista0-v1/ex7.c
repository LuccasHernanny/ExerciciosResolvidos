/*7) Escreva um programa para imprimir um caractere informado pelo usuário*/
#include <stdio.h>
int main(){
    char usuario;
    printf("Informe um caracter: ");
    scanf("%c", &usuario);

    printf("O caracter informado foi %c\n", usuario);
    return 0;
}