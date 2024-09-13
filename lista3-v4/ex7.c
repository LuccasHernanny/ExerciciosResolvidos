/*7. Para um consórcio, sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor atual das prestações. Elaborar um procedimento para determinar o total
pago pelo consorciado e o saldo devedor. O total pago e o saldo devedor também serão
parâmetros do procedimento, mas serão passados por referência. Chame
adequadamente o procedimento na função main().*/

#include <stdio.h>

void CalculaSaldo(float *pago, float *saldo, int pPagas, float valorP, float valorTotal){
    *pago = pPagas * valorP;
    *saldo = valorTotal - *pago;
}
int main(){
    int nPrestacoes, qntPrestacoes;
    float valorPrestacao, saldoDevedor, totalPago, consorcio;

    printf("Informe quantas o total de prestacoes: ");
    scanf("%d", &nPrestacoes);
    printf("Informe quantas prestacoes foram pagas: ");
    scanf("%d", &qntPrestacoes);
    printf("Informe o valor das prestacoes R$: ");
    scanf("%f", &valorPrestacao);

    consorcio = valorPrestacao*nPrestacoes;
    CalculaSaldo(&totalPago, &saldoDevedor, qntPrestacoes, valorPrestacao, consorcio);

    printf("Foram pagas %d prestacoes, de valor R$: %.2f, de um total de %d prestacoes!\n", qntPrestacoes, valorPrestacao, nPrestacoes);
    printf("Foi pago R$: %.2f, ficando com um saldo devedor de R$: %.2f\n", totalPago, saldoDevedor);

    return 0;
}