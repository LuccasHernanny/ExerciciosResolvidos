/*9. Escreva um programa onde a diferença entre dois números corresponde a um
caracter da tabela ASCII. Os dois números são digitados pelo usuário. Importante
destacar que o programa somente calcula a diferença caso o primeiro número seja
maior que o segundo. Além disso, caso o resultado da diferença seja um dos
caracteres não imprimíveis na tabela ASCII a mensagem exibida deve ser
“caractere não imprimível*/

#include <stdio.h>

int main(){
    int n1, n2, diferenca;
    printf("Informe o 1o numero: ");
    scanf("%d", &n1);
    printf("Informe o 2o numero: ");
    scanf("%d", &n2);
    if(n1 < n2){
        printf("O primeiro valor deve ser maior que o segundo!\n");
        return 0;
    }
    diferenca = n1 - n2;
    if((diferenca>=0 && diferenca <=32) || diferenca == 127){
        printf("Caracter nao imprimivel!\n");
        return 0;
    }
    printf("O caracter com codigo ASCII igual ao da diferenca entre %d e %d corresponde a: %c\n", n1, n2, diferenca);
    return 0;
}