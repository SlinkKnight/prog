#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

int main() {

    float a[TAMANHO], b[TAMANHO];
    int i;

    for(i=0; i<TAMANHO; i++) {
        printf("informe o indice %d >> ", i);
        scanf("%f", &a[i]);
        b[TAMANHO - i - 1] = a[i];
    }

    for(i=0; i<TAMANHO; i++) {
        printf("Vetor A indice %d = %.1f\n", i, a[i]);
    }
    for(i=0; i<TAMANHO; i++) {
        printf("Vetor B indice %d = %.1f\n", i, b[i]);
    }
    return 0;
}