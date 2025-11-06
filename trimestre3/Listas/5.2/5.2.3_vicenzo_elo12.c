#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main() {

    float a[TAMANHO], b[TAMANHO];
    int i;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i do vetor A >> ", i);
        scanf("%f", &a[i]);
        b[i] = a[i] * a[i];
    }

    for(i=0; i<TAMANHO; i++) {
        printf("Indice %i do vetor B: %.1f\n", i, b[i]);
    }
    return 0;
}