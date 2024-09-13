/*15. Arranjo são as combinações possíveis de um sub-grupo de dado grupo, onde a ordem dos
elementos é levada em conta. Exemplo: seja uma corrida com 5 competidores. De quantas
maneiras podemos ter os 3 primeiros colocados? Temos 5 possibilidades para o primeiro
colocado, 4 possibilidades para o segundo e 3 possibilidades para o terceiro. Assim, a
resposta é 5x4x3 = 60. A fórmula do arranjo é: A(n,p) = n! / (n-p)!
Onde n é o total de elementos do conjunto e p o total de elementos do sub-conjunto.
Exemplos: Arranjo(6,2) = 6x5 = 30; Arranjo(8,4) = 8x7x6x5 = 1680. Veja que para calcular
o arranjo, é necessário resolver o fatorial.
a) Crie uma função para resolver o fatorial;
b) Crie uma função para calcular o arranjo. Essa função deve invocar a função
fatorial.*/

#include<stdio.h>

int fatorial(int n){
    int i, fatorial = n;
    for (i = n-1; i > 1; i--)
    {
        fatorial = fatorial * i;
    }
    
    return fatorial;
}
int arranjo(int n, int p){
    int a;
    a = fatorial(n)/fatorial(n-p);
    return a;
}

int main (){
    int n, p;

    printf("Informe o total de elementos: ");
    scanf("%d", &n);
    printf("Informe o numero de elementos do sub-grupo: ");
    scanf("%d", &p);
    printf("Total de combinacoes: %d\n", arranjo(n, p));

    return 0;
}