#include <stdio.h>
#include <math.h>

int main(void){
    float x1, x2, y1, y2;

    printf("Informe as coordenadas do P1 (x, y): ");
    scanf("%f %f", &x1, &y1);

    printf("Informe as coordenadas do P2 (x, y): ");
    scanf("%f %f", &x2, &y2);

    printf("A distancias dos dois pontos e: %f \n", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));

    return 0;
}
