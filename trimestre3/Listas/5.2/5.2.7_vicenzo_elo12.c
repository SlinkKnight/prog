#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

int main() {

    int a[TAMANHO];
    int i;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i >> ", i);
        scanf("%i", &a[i]);
    }

    for(i=TAMANHO-1; i>=0; i--) {
        printf("Indice %i: %i\n", i, a[i]);
    }
    return 0;
}