#include <stdio.h>
#include <math.h>
int main() {
    int Px, Py, Qx, Qy, distancia;
    
    printf("Informe a coordenada x do Ponto P: ");
    scanf("%d", &Px);
    printf("Informe a coordenada y do Ponto P: ");
    scanf("%d", &Py);
    printf("Informe a coordenada x do Ponto Q: ");
    scanf("%d", &Qx);
    printf("Informe a coordenada y do Ponto Q: ");
    scanf("%d", &Qy);

    distancia = sqrt(pow((Qx - Px), 2) + pow((Qy - Qx), 2));
    
    printf("A distancia entre os 2 pontos: %d", distancia);
    return 0;
}