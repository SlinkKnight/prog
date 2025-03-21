#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    float valor;
    float respostaRaizQuadrada;

    printf("Informe o valor que se deseja calcular a raiz quadrada >> ");
    scanf("%f", &valor);
    respostaRaizQuadrada = sqrt(valor);

    if(respostaRaizQuadrada == -1) {
        printf("vai tomar no cu");
    } else {
        printf("O resultado da raiz de %f: %.0f", valor, respostaRaizQuadrada);
    }
    return 0;
}
