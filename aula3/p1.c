#include <stdio.h>

/* Receba 3 valores inteiros e verifique se estes valores podem representar
os lados de um tri�ngulo. Caso positivo, diga o tipo do tri�ngulo: equil�tero, is�celes ou escaleno. */

int main(void){
    int A, B, C;

    printf("Informe os valores dos lados do triangulo (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A<(B+C)) && (B<(C+A)) && (C<(A+B))){
        printf("Forma um triangulo \\o/\n");
        if ((A == B) && (B == C)){
            printf("Triangulo Equilatero\n");
        }
        else if ((A != B) && (A != C) && (B != C)){
            printf("Triangulo Escaleno\n");
        }
        else{
            printf("Triangulo Isoceles\n");
        }
    }
    else{
        printf("Nao forma um triangulo :'(\n");
    }
    return 0;
}
