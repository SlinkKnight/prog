#include <stdio.h>
#include <stdlib.h>
#define tamanho 3

int main() {

    float soma = 0.0, media, notas[3];
    int i, consultaNota;

    for(i=0; i<tamanho; i++) {
        printf("informe a nota %d >> ", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    printf("Media calculada: %.2f", soma / i);
    do {
        printf("Informe a nota a ser consultada (1 até %d)", tamanho);
        scanf("%d", &consultaNota);
    } while (consultaNota <= 0 || consultaNota < tamanho);
    
    printf("Nota %d: %.2f", consultaNota, notas[consultaNota-1]);

    return 0;
}