#include <stdlib.h>
#include <stdio.h>

int main() {
    while (1) {
        float numero = 0;
        printf("DIGA O NUMERO >> ");
        scanf("%f", &numero);
        if(numero == 0) printf("ZERO\n");
        else printf("NAO ZERO\n");
    }
    return 0;
}
