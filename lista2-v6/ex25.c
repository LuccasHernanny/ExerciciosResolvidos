/*25.Considere que uma calculadora comum, de quatro operações, está com as teclas
de divisão e multiplicação inoperantes. Codifique algoritmos que resolvam
expressões matemáticas a seguir usando apenas operações de adição e subtração.
Se preferir divida a solução em dois algoritmos, uma para a multiplicação e outro
para a divisão. Em ambos o usuário informa o primeiro e o segundo número.
12 x 4
23 x 11
10 / 2
175 / 7 */

#include <stdio.h>

int main(){
    int i, aux, soma=0, cont = 0;
    for (i = 1; i <= 4; i++)
    {
        soma = 12 + soma;
    }
    printf("12 x 4 = %d\n", soma);
    soma=0;
    for (i = 1; i <= 11; i++)
    {
        soma = 23 + soma;
    }
    printf("23 x 11 = %d\n", soma);
    aux = 0;
    while(aux != 10){
        aux = aux + 2;
        cont++;
    }
    printf("10 / 2 = %d\n", cont);
    aux = 0;
    cont = 0;
    while(aux != 175){
        aux = aux + 7;
        cont++;
    }
    printf("175 / 7 = %d\n", cont);
    

    return 0;
}