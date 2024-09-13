/*10. Ainda no contexto da tabela ASCII, escreva um programa para apresentar
para o usuário os caracteres imprimíveis dentro de um intervalo a e b, onde a < b.
Por exemplo, ao informar o intervalo 60 e 65, os caracteres <, =, >, ?, @ e A, são
apresentados.*/

#include <stdio.h>

int main(){
    int a, b, i;
    printf("Informe o comeco do intervalo (entre 33 e 126): ");
    scanf("%d", &a);
    printf("Informe o final do intervalo (entre 33 e 126): ");
    scanf("%d", &b);
    if(a >= b){
        printf("O valor do comeco deve ser menor que o do final!\n");
        return 0;
    }
    if((a >= 0 && a <= 33 || b >=0 && b <= 33) || a == 127 || b == 127 || a < 0 || b < 0 ){
        printf("Caracter nao imprimivel ou valor invalido!\n");
        return 0;
    }
    for(i = a; i <= b; i++){
        printf("%c ", i);
    }
    printf("\n");
    
    return 0;
}