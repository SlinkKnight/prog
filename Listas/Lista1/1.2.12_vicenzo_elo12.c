#include <stdio.h>
#include <stdlib.h>

int main() {

    int minimo, maximo;
    float estoqueMedio;

    printf("Digite a quantidade minima e maxima >> ");
    scanf("%d %d", &minimo, &maximo);

    estoqueMedio = (minimo + maximo) / 2.0;
    printf("Estoque medio = %.2f\n", estoqueMedio);

    return 0;
}
