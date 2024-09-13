/*11. Em uma eleição presidencial existem quatro candidatos. Os votos são informados
através de códigos. Os dados utilizados para a contagem dos votos obedecem à
seguinte codificação:
a) 1,2,3,4 = voto para os respectivos candidatos;
b) 5 = voto nulo;
c) 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e
escreva:
* Total de votos para cada candidato;
* Total de votos nulos;
* Total de votos em branco;
O programa encerra e apresenta os totais após o código 0 ser pressionado.*/

#include <stdio.h>

int main(){
    int votos[10], i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulos = 0, brancos = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Insira o codigo do candidatos: ");
        scanf("%d", &votos[i]);
        if(votos[i] == 0){
            i = 10;
        }
    }
    for(i = 0; i < 10; i++){// votos com codigos invalidos sao apenas desconsiderados
        switch (votos[i])
        {
        case 1: 
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            nulos++;
            break;
        case 6:
            brancos++;
            break;
        }
    }
    printf("Total de votos candidato 1: %d\n", c1);
    printf("Total de votos candidato 2: %d\n", c2);
    printf("Total de votos candidato 3: %d\n", c3);
    printf("Total de votos candidato 4: %d\n", c4);
    printf("Total de votos Nulos: %d\n", nulos);
    printf("Total de votos em Brancos: %d\n", brancos);
    return 0;
}