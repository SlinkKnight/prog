#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main() {

    int a[TAMANHO];
    int i, soma = 0;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i do vetor A >> ", i);
        scanf("%i", &a[i]);
        if(a[i] % 2 == 0) soma++;
    }

    printf("Temos %i numeros pares no vetor\n", soma);
    return 0;
}