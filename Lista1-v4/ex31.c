/*31. Elabore um algoritmo que leia o valor de dois números inteiros e a operação aritmética
desejada. Calcule então a resposta adequada.*/

#include <stdio.h>

int main(){
    int n1, n2;
    char operacao;
    printf("Informe o 1o valor: ");
    scanf("%d", &n1);
    printf("Informe o 2o valor: ");
    scanf("%d", &n2);

    printf("+ - Soma\n");
    printf("- - Subtração\n");
    printf("* - Multiplicação\n");
    printf("/ - Divisão\n");
    printf("Escolha a operação: ");
    scanf(" %c", &operacao); //Ao colocar um espaço antes %c garante que ele não seja pulado.
    switch (operacao)
    {
    case '+':
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%d x %d = %d\n", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%d / %d = %d\n", n1, n2, n1 / n2 );
        break;
    }
    return 0;
}