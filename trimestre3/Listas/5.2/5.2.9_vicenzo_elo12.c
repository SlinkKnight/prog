#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 3

int main() {

    int a[LINHAS][COLUNAS], v[COLUNAS] = {0,0,0};
    int i, j;

    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("Digite o indice %i, %i >> ", i, j);
            scanf("%i", &a[i][j]);
            v[j] += a[i][j];          
        }
    }

    for(i=0; i<LINHAS; i++) {
        for(j=0; j<COLUNAS; j++) {
            printf("%i  ", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<COLUNAS; i++) {
        printf("Indice %i: %i\n", i, v[i]);
    }

    return 0;
}