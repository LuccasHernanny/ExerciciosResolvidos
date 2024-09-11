/*10. Escreva um algoritmo para apresentar a média de quatro notas de um aluno fornecidas
através do console.*/
#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4, media;
    printf("Informe a primeira nota:");
    scanf("%d", &nota1);
    printf("Informe a segunda nota:");
    scanf("%d", &nota2);
    printf("Informe a terceira nota:");
    scanf("%d", &nota3);
    printf("Informe a quarta nota:");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("Sua media e: %d\n", media);

    return 0;
}