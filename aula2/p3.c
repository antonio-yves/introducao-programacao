#include <stdio.h>
#include <math.h>

int main(void){
    // 3.14 * pow(raio, 2) + 2 * 3.14 * raio * altura
    float raio, altura, area;

    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);

    area = (3.14 * pow(raio, 2)) + (2 * 3.14 * raio * altura);

    printf("\n\nPara pintar um cilindro com area de: %f m^2\n\nSera necessario: %d latas de tinta\n\nCusto total: R$ %f\n\n", area, (int)ceil((area/3)/5), ceil((area/3)/5) * 20);

    return 0;
}
