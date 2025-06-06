#include <stdlib.h>
#include <stdio.h>

int main() {

    char codigo;
    int tarifa, horas;
    int flag = 0;
    float precoTarifa, final;

    printf("Insira o código de consumidor >> ");
    scanf("%c", &codigo);
    printf("Insira o o tipo de tarifa de consumidor (de 1 à 3) >> ");
    scanf("%i", &tarifa);
    printf("Insira a quantidade de KW/h >> ");
    scanf("%i", &horas);

    if (horas > 0) {

        if (tarifa == 1) {
            precoTarifa = 0;
        } else if (tarifa == 2) {
            precoTarifa = 7.45;
        } else if (tarifa == 3) {
            precoTarifa = 11.25;
        } else flag = 1;
    
    
        if (codigo == 'R' || codigo == 'r') {
            final = 0.45 * horas + precoTarifa;
        } else if (codigo == 'C' || codigo == 'c') {
            final = 0.75 * horas + precoTarifa;
        } else if (codigo == 'I' || codigo == 'i') {
            final = 1.25 * horas + precoTarifa;
        } else flag = 2;

        if (flag == 0) {
            printf("Sua conta é de: %.2f\n", final);
        } else printf("Argumentos inválidos\n");
    
    }
    return 0;
}