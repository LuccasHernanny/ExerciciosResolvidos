/*6) Escreva um programa para informar uma hora no formato HH:MM:SS*/
#include <stdio.h>
int main(){
    int hora, minuto, segundo;
    printf("Informe a hora: ");
    scanf("%d", &hora);
    printf("Informe o minuto: ");
    scanf("%d", &minuto);
    printf("Informe o segundo: ");
    scanf("%d", &segundo);

    printf("A hora informada é %d:%d:%d\n", hora, minuto, segundo);
    return 0;
}