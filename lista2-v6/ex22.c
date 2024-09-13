/*22. Faça um algoritmo que seja capaz de obter o quociente inteiro da divisão de dois
números fornecidos, sem utilizar a operação de divisão (/).*/

#include <stdio.h>
int main(){
    int i, divisor, dividendo, aux = 0, contador = 0;

    printf("Informe o dividendo: ");
    scanf("%d", &dividendo);
    printf("Informe o divisor: ");
    scanf("%d", &divisor);
    if(dividendo < divisor){
        printf("Resultado: 0\n");
        return 0;
    }
    for(i = dividendo; i >= divisor; i--){
        if(i % divisor == 0){
            while(aux != i){
                aux = aux + divisor;
                contador++;
            }
        i = dividendo - i;
        printf("%d", contador);
        contador = 0;
        }
    }
    printf("\n");

    return 0;
}