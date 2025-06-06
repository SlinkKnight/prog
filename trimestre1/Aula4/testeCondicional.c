#include <stdlib.h>
#include <stdio.h>

int main() {

    int valor1;

    printf("Insira o valor >> ");
    scanf("%d", &valor1);

    if(valor1 > 0) {
        printf("O valor inserido é positivo\n");
    } else if(valor1 < 0) {
        printf("O valor inserido é negativo\n");
    } else {
        printf("O valor inserido é nulo\n");
    }

    return 0;
}
