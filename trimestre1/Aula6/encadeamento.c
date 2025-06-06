#include <stdlib.h>
#include <stdio.h>

int main() {

    float numero;

    printf("Insira seu numero >> ");
    scanf("%f", &numero);

    if(numero >= 0) {
        if(numero <= 2.5) {
            printf("o numero inserido é baixo\n");
        } else if(numero <= 3.5) {
            printf("o numero inserido é médio\n");
        } else{
            printf("o numero inserido é alto\n");
        }
    } else printf("numero invalido\n");
    
    return 0;
}