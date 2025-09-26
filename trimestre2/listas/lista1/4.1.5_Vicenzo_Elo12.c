#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int numero, last;

    printf("digite o valor 1 >> ");
    scanf("%d", &numero);
    last = numero;

    for (int i = 2; i <= 5; i++) {
        printf("digite o valor %d: ", i);
        scanf("%d", &numero);
        if (numero < last) {
            last = numero;
        }
    }

    printf("o menor valor foi: %d\n", last);

    return 0;
}
