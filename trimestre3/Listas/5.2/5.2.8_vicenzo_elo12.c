#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main() {

    int a[TAMANHO];
    int i, neg = 0, pos = 0;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i >> ", i);
        scanf("%i", &a[i]);
        if(a[i] < 0) neg++;
        if(a[i] > 0) pos += a[i];
    }
    printf("A soma dos positivos: %i\n", pos);
    printf("A quantidade de negativos: %i\n", neg);

    return 0;
}