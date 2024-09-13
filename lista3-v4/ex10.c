/*10. Crie um procedimento para trocar os valores de duas variáveis inteiras. Suponha que a =
20 e b = 10. Após chamar o procedimento os valores de a e b serão 10 e 20,
respectivamente. Nesse exercício você usaria passagem de valor por referência ou por
valor? Justifique.*/

#include <stdio.h>

void troca(int *A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}
int main(){
    int a, b;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("A: %d\nB:% d\n", a, b);
    return 0;
}