#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 8

int main() {

    int a[TAMANHO];
    int i, x, y, soma;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i do vetor A >> ", i);
        scanf("%i", &a[i]);
    }

    printf("Digite o primeiro indice >> ");
    scanf("%i", &x);

    printf("Digite o segundo indice >> ");
    scanf("%i", &y);

    soma = a[x] + a[y];

    printf("Resultado encontrado na soma = %i\n", soma);

    return 0;
}