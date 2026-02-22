#include <stdlib.h>
#include <stdio.h>

int main() {

    int maior, menor, n;
    while (1) {
        printf("Digite numero um >> ");
        scanf("%d", &n);
        printf("Digite numero dois >> ");
        scanf("%d", &menor);

        if(n > menor) maior = n;
        else {
            maior = menor;
            menor = n;
        }

        printf("Numero maior eh: %d, e menor eh %d\n", maior, menor);
    }
    return 0;
}