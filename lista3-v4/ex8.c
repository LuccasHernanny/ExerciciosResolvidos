/*8. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem de lucro do revendedor e com o custo dos impostos (aplicados ao custo de
fábrica). Suponha que a percentagem do revendedor seja 25% e que os impostos custam
45% do custo de fábrica. Elaborar uma função sem retorno para determinar o preço final
do automóvel (custo ao consumidor). O preço final também é um parâmetro da função.
Utilize passagem de parâmetro por referência para conhecer o preço final no corpo da
função main().*/

#include <stdio.h>

void CalculaPrecoFinal(float pFabrica, float*pFinal){

    *pFinal = pFabrica + pFabrica*0.25 + pFabrica*0.45;
}
int main(){
    float precoFabrica, precoFinal;

    printf("Informe o preco de fabrica do carro: ");
    scanf("%f", &precoFabrica);

    CalculaPrecoFinal(precoFabrica, &precoFinal);

    printf("Preco final: R$: %.2f\n",precoFinal);

    return 0;
}