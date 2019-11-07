#include <stdio.h>

int main(void){
    float S, velocidade = 2, tempo, SInicial = 10;

    printf("Informe o tempo decorrido: ");
    scanf("%f", &tempo);

    S = SInicial + (velocidade * tempo);

    printf("O espaco final e: %f \n", S);
    return 0;
}
