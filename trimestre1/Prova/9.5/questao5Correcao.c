#include <stdlib.h>
#include <stdio.h>

int main() {

    char codigo;
    int tarifa, horas;
    float precoTarifa, final;

    printf("Insira o código de consumidor (R/C/I) >> ");
    scanf(" %c", &codigo);

    printf("Insira o tipo de tarifa de consumidor (de 1 à 3) >> ");
    scanf("%i", &tarifa);

    if (tarifa == 1) {
        precoTarifa = 0;
    } else if (tarifa == 2) {
        precoTarifa = 7.45;
    } else if (tarifa == 3) {
        precoTarifa = 11.25;
    } else {
        printf("Tarifa inválida.\n");
        return 1;
    }

    printf("Insira a quantidade de KW/h >> ");
    scanf("%i", &horas);

    if (horas < 0) {
        printf("Quantidade de KW/h inválida.\n");
        return 1;
    }

    if (codigo == 'R' || codigo == 'r') {
        final = 0.45 * horas + precoTarifa;
    } else if (codigo == 'C' || codigo == 'c') {
        final = 0.75 * horas + precoTarifa;
    } else if (codigo == 'I' || codigo == 'i') {
        final = 1.25 * horas + precoTarifa;
    } else {
        printf("Código de consumidor inválido.\n");
        return 1;
    }

    printf("Sua conta é de: %.2f\n", final);
    return 0;
}
