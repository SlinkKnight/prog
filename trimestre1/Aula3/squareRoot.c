#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    float valor;
    float respostaRaizQuadrada;

    printf("Informe o valor que deseja calcular >> ");
    scanf("%f", &valor);
    respostaRaizQuadrada = sqrt(valor);
    printf("O resultado da raiz de %.1f: %.2f", valor, respostaRaizQuadrada);
    return 0;
}
