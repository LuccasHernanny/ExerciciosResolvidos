/*37. Elabore um algoritmo que, dada a idade de um nadador, classifique-o em um das
seguintes categorias:
- 5 a 7 → INFANTIL A
- 8 até 10 → INFANTIL B
- 11 até 13 → JUVENIL A
- 14 até 17 → JUVENIL B
- Maiores de 18 → ADULTO*/

#include <stdio.h>

int main(){
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade < 5){
        printf("Idade invalida!\n");
        return 0;
    }
    if(idade >= 5 && idade <= 7){
        printf("Categoria INFANTIL A!\n");
        return 0;
    }
    if(idade >= 8 && idade <= 10){
        printf("Categoria INFANTIL B!\n");
        return 0;
    }
    if(idade >= 11 && idade <= 13){
        printf("Categoria JUVENIL A!\n");
        return 0;
    }
    if(idade >= 14 && idade <= 17){
        printf("Categoria INFANTIL B!\n");
        return 0;
    }
    printf("Categoria ADULTO! \n");
    return 0;
}