#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso;

    printf("Digite seu peso em kilos >> ");
    scanf("%f", &peso);

    printf("seu peso em gramas: %.2f g\n", peso * 1000);
    printf("seu novo peso com a adicao de 5 por cento a mais: %.2f g\n", peso * 1000 * 1.05);

    return 0;
}
