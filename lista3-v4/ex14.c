/*4. Deseja-se um procedimento que recebe 3 valores numéricos como parâmetro, como por
exemplo, x=40, y=20 e z=30. Após executar o procedimento, o menor valor estará em x, o
menor em y e o maior em z. Ou seja, ordena os números em ordem crescente: x=20, y=30
e z=40.*/

#include <stdio.h>

void ordenaCrescente(int *x, int *y, int *z){
    int aux = *y;
    if(*y > *z || *y < *x){
        aux = *z;
        *z = *y;
        *y = aux;
    }
    if(*y > *z || *y < *x){
        aux = *x;
        *x = *y;
        *y = aux;
    }
    if(*y > *z || *y < *x){
        aux = *z;
        *z = *y;
        *y = aux;
    }
    if(*y > *z || *y < *x){
        aux = *x;
        *x = *y;
        *y = aux;
    }
    if(*y > *z || *y < *x){
        aux = *z;
        *z = *y;
        *y = aux;
    }

}
int main(){
    int x, y, z;

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    printf("Informe o valor de z: ");
    scanf("%d", &z);

    ordenaCrescente(&x, &y, &z);

    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    return 0;
}