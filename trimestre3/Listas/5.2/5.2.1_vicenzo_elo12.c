#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

int main() {

    int a[TAMANHO] = {1, 0, 5, -2, -5, 7};
    int i, soma;

    soma = a[0] + a[1] + a[5];
    printf("Soma: %i\n", soma);

    a[4] = 100;

    for(i=0; i<TAMANHO; i++) {
        printf("Indice %i: %i\n", i, a[i]);
    }
    return 0;
}