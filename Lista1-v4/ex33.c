/*33. Elaborar um programa que determine o número de dias que a pessoa já viveu.
Considerando que um mês tem 30 dias e que a pessoa informa a quantidade de anos
completos.*/

#include <stdio.h>

int main(){
    int idade;
    int x,y,z;
    x=y=10;
    z=++x;
    x=-x;
    y++;
    x=x+y-(z--);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Voce viveu %d dias\n", idade*12*30);
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}