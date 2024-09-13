/*4. Elaborar uma função para calcular a distância entre dois pontos. Considerando que o
ponto A, tem coordenadas A(x1 , y1) e o ponto B coordenadas B(x2 , y2).*/

#include <stdio.h>
#include <math.h>
int distancia(int xA, int yA, int xB, int yB){
    return sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
}
int main() {
    int pX, pY, qX, qY;
    
    printf("Informe a coordenada x do ponto P: ");
    scanf("%d", &pX);
    printf("Informe a coordenada y do ponto P: ");
    scanf("%d", &pY);
    printf("Informe a coordenada x do ponto Q: ");
    scanf("%d", &qX);
    printf("Informe a coordenada y do ponto Q: ");
    scanf("%d", &qY);
    
    printf("A distancia entre o ponto P(%d, %d) e Q(%d, %d) é : %d\n", pX, pY, qX, qY, distancia(pX, pY, qX, qY));
    return 0;
}