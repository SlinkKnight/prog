#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main() {

    int a[TAMANHO], maior[2] = {0,0}, menor[2] = {0,0};
    int i, ultimo = 0;

    for(i=0; i<TAMANHO; i++) {
        printf("Digite o valor do indice %i do vetor A >> ", i);
        scanf("%i", &a[i]);
        if(a[i] >=  maior[0]) {
            maior[0] = a[i];
            maior[1] = i;
        }
        if(a[i] <=  menor[0]) {
            menor[0] = a[i];
            menor[1] = i;
        }
    }
    printf("O maior numero do vetor: %i, no indice %i\n", maior[0], maior[1]);
    printf("O menor numero do vetor: %i, no indice %i\n", menor[0], menor[1]);
    return 0;
}