#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b;

    printf("Digite os dois valores >> ");
    scanf("%f %f", &a, &b);

    printf("Soma: %.2f\n", a + b);
    printf("Subtracao: %.2f\n", a - b);
    printf("Multiplicacao: %.2f\n", a * b);

    if (b != 0) {
        printf("Divisao: %.2f\n", a / b);
    } else
        printf("Não dividiras por zero.\n");

    return 0;
}
