/*32. Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõe
uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de
ano bissexto*/

#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if(dia < 0){
        printf("Data invalida, dia inexistente!\n");
        return 0;
    }
    if(ano < 0 || ano > 2024){
        printf("Data invalida, ano inexistente!\n");
        return 0;
    }
    //Vamos destrinchar o problema da parte basica pra complexa
    switch (mes)//Como o tanto de dias varia com o mes, vamos trabalhar apartir disso
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: //meses que possuem 31 dias
        if(dia > 31 ){
            printf("Data invalida, dia inexistente!\n");
            return 0;
        }
        printf("Data valida!\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11: // meses com 30 dias
        if(dia > 30 ){
            printf("Data invalida, dia inexistente!\n");
            return 0;
        }
        printf("Data valida!\n");
        break;
    case 2: /*Aqui e parte complexa, para ser um ano bissexto, a dezena do ano
            tem que ser divisivel por quatro, e para meses terminados em 00, tem que ser divisivel por 400*/
        if((ano >= 1000) && (((ano%1000)%100) % 4 == 0 || (ano % 100 == 0 && ano % 400 == 0))){// teste bisexto para anos acima de mil
            if(dia > 29){
                printf("Data invalida, dia inexistente!\n");
                return 0;
            }
            printf("Data valida!\n");
            return 0;
        }
        if((ano >= 100 && ano < 1000) && ((ano%100) % 4 == 0 || (ano % 100 == 0 && ano % 400 == 0))){// teste bisexto para anos acima de mil
            if(dia > 29 ){
                printf("Data invalida, dia inexistente!\n");
                return 0;
            }
            printf("Data valida!2\n");
            return 0;
        }
        if((ano < 100 && ano > 0) && (ano % 4 == 0)){
            if(dia > 29 ){
                printf("Data invalida, dia inexistente!\n");
                return 0;
            }
            printf("Data valida!3\n");
            return 0;
        }//se ele passar por todos esses ifs, ele não é bissexto
        if(dia > 28){
            printf("Data invalida, dia inexistente!\n");
            return 0;
        }
        printf("Data valida!\n");

        break;
    default:
        printf("Data invalida, mes inexistente!\n");
        break;
    }
    return 0;
}